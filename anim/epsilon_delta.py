from manimlib import *

class InteractiveDotSlider(Scene):
    def construct(self):
        # Create coordinate system
        axes = Axes(
            x_range=[-5, 5, 1],
            y_range=[-3, 3, 1],
            width=10,
            height=6
        )
        axes.add_coordinate_labels()
        
        # Create a dot that will move
        dot = Dot(color=BLUE, radius=0.1)
        dot.move_to(axes.c2p(0, 0))  # Start at origin
        
        # Create a tracker for x-coordinate
        x_tracker = ValueTracker(0)
        
        # Update dot position based on tracker
        dot.add_updater(
            lambda m: m.move_to(axes.c2p(x_tracker.get_value(), 0))
        )
        
        # Create coordinate label that follows the dot
        coord_label = always_redraw(
            lambda: Text(
                f"x = {x_tracker.get_value():.2f}",
                font_size=24
            ).next_to(dot, UP)
        )
        
        # Add everything to scene
        self.add(axes, dot, coord_label)
        
        # Make the x_tracker interactive
        # You can now use the mouse to drag or use keyboard shortcuts
        self.add(x_tracker)
        
        # Alternative: Add a number line slider at the bottom
        slider = NumberLine(
            x_range=[-5, 5, 1],
            length=10,
            include_numbers=True,
            font_size=20
        )
        slider.to_edge(DOWN, buff=0.5)
        
        slider_dot = Dot(color=RED, radius=0.08)
        slider_dot.add_updater(
            lambda m: m.move_to(slider.n2p(x_tracker.get_value()))
        )
        
        self.add(slider, slider_dot)
        
        # Instructions text
        instructions = Text(
            "Press 'd' to toggle interaction mode\nDrag the slider or use arrow keys",
            font_size=20,
            color=YELLOW
        ).to_corner(UL)
        self.add(instructions)
        
        self.wait()