// Inverse-transform uv into grid space (undo T * R * S).
vec2 uv_to_grid(vec2 uv, vec2 translate, float angle, vec2 scale) {
    vec2 p = uv - translate;         // undo translation
    float c = cos(-angle), s = sin(-angle);
    p = mat2(c, -s, s, c) * p;       // undo rotation
    p /= scale;                      // undo scale
    return p;
}

// Thickness-aware grid lines (robust under rotation/scale)
float gridLines(vec2 p, float thicknessPx) {
    vec2 cell = abs(fract(p) - 0.5);

    // pixel size in *grid* units for each axis of p
    float dpx = max(abs(dFdx(p.x)), abs(dFdy(p.x)));
    float dpy = max(abs(dFdx(p.y)), abs(dFdy(p.y)));

    float wx = thicknessPx * dpx;
    float wy = thicknessPx * dpy;

    float vx = 1.0 - smoothstep(wx*0.5 - dpx, wx*0.5 + dpx, cell.x); // verticals
    float hy = 1.0 - smoothstep(wy*0.5 - dpy, wy*0.5 + dpy, cell.y); // horizontals
    return max(vx, hy);
}

vec3 cartesian_plane(vec2 uv, vec2 origin, float spacing,
                     vec2 t, float a, vec2 s, // transform: translate, angle, scale
                     float minorPx, float majorPx, float majorEvery)
{
    vec2 p = uv_to_grid(uv, t, a, s); 
    p = (p - origin) / spacing;

    float minor = gridLines(p, minorPx);
    float major = gridLines(p / majorEvery, majorPx);

    float dpx = max(abs(dFdx(p.x)), abs(dFdy(p.x)));
    float dpy = max(abs(dFdx(p.y)), abs(dFdy(p.y)));
    float axisX = 1.0 - smoothstep(dpy, 3.0*dpy, abs(p.y));
    float axisY = 1.0 - smoothstep(dpx, 3.0*dpx, abs(p.x));
    float axes  = max(axisX, axisY);

    vec3 bg     = vec3(0.0);
    vec3 minorC = vec3(0.10);
    vec3 majorC = vec3(0.30);
    vec3 axesC  = vec3(0.95, 0.30, 0.30);

    vec3 col = bg;
    col = mix(col, minorC, minor);
    col = mix(col, majorC, major);
    col = mix(col, axesC, axes);
    return col;
}

void mainImage(out vec4 fragColor, in vec2 fragCoord) {
  vec2 uv = fragCoord/iResolution.xy;
  vec3 col = cartesian_plane(uv, vec2(0.0), 0.1, vec2(0.5), radians(25.0), vec2(1.2, 0.8), 1.0, 2.0, 5.0);
  fragColor = vec4(col, 1.0);
}