def print_labeled_matrix(matrix):
  """
  Prints a 2D array with aligned row and column labels.
  """
  if not matrix or not matrix[0]:
    print("Matrix is empty.")
    return

  rows = len(matrix)
  cols = len(matrix[0])

  # 1. Generate Labels
  # You can change these lists to custom strings if needed
  row_labels = [f"Row {i}" for i in range(rows)]
  col_labels = [f"Col {i}" for i in range(cols)]

  # 2. Calculate Column Widths
  # For each column, we need the width of the widest item (either the label or a number)
  col_widths = []
  for c in range(cols):
    # Get all string representations of numbers in this column
    col_values = [str(matrix[r][c]) for r in range(rows)]

    # Add the column label itself to the calculation so headers don't get cut off
    col_values.append(col_labels[c])

    # Find the maximum length in this column and add a little padding (e.g., 2 spaces)
    max_len = max(len(val) for val in col_values)
    col_widths.append(max_len + 2)

  # 3. Calculate Row Label Width
  # We need to know how wide the left-hand label column should be
  row_label_width = max(len(s) for s in row_labels) + \
      3  # +3 for padding/separator

  # 4. Print Header (Column Labels)
  # Print empty space for the top-left corner
  print(" " * row_label_width, end="|")

  for c in range(cols):
    # Right-align (>) the label within the calculated width
    print(f"{col_labels[c]:>{col_widths[c]}}", end="")
  print()  # Newline after headers

  # Print a separator line (optional, but looks nice)
  total_width = row_label_width + 1 + sum(col_widths)
  print("-" * total_width)

  # 5. Print Data Rows
  for r in range(rows):
    # Print the row label (Left aligned <)
    print(f"{row_labels[r]:<{row_label_width}}", end="|")

    # Print the row data
    for c in range(cols):
      # Right-align (>) the number within its specific column width
      print(f"{matrix[r][c]:>{col_widths[c]}}", end="")
    print()  # Newline after each row

# --- Examples ---


print("--- Example 1: Varying lengths ---")
data_1 = [
    [1, 2500, 3],
    [45, 5, 612345],
    [7, 88, 9]
]
print_labeled_matrix(data_1)

print("\n--- Example 2: Negative numbers and large headers ---")
data_2 = [
    [-5, 10, -155],
    [20, -1000, 30]
]
print_labeled_matrix(data_2)
