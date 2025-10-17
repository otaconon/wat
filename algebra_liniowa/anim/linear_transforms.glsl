
float cross2d(vec2 u, vec2 v) {
  return u.x * v.y - u.y * v.x;
}

bool line(vec2 v, vec2 w, vec2 p, float width) {
  vec2 d = w - v;
  float dist = length(cross2d((p - v), d)) / length(d);

  if (dist <= width) 
    return true;
  return false;
}

vec3 grid(vec2 uv, float line_width, vec2[2*2] points) {
  return vec3(0.0, 0.0, 0.0);
}

vec3 caresian_plane(vec2 uv, float line_width, vec2[2*2] points) {
  vec3 color = vec3(0.5, 0.7, 0.2);
  if (line(points[0], points[1], uv, line_width))
    return color;
  if (line(points[0], points[2], uv, line_width))
    return color;
  if (line(points[3], points[1], uv, line_width))
    return color;
  if (line(points[3], points[2], uv, line_width))
    return color;

  return vec3(0.0, 0.0, 0.0);
}

vec2 translate(vec2 p, vec2 t) {
  mat3 m = mat3(
    1.0, 0.0, 0.0,
    0.0, 1.0, 0.0,
    t.x, t.y, 1.0
  );

  return vec2(m * vec3(p, 1.0));
}

vec2 rotate(vec2 p, float r) {
  mat3 m = mat3(
    cos(r), sin(r), 0.0,
    -sin(r), cos(r), 0.0,
    0.0, 0.0, 1.0
  );

  p = translate(p, -vec2(0.5, 0.5));
  p = vec2(m * vec3(p, 1.0));
  p = translate(p, vec2(0.5, 0.5));

  return p;
}

float gridLines(vec2 p, float thicknessPx) {
    vec2 dp = fwidth(p);
    float w  = thicknessPx * max(dp.x, dp.y);
    vec2 a   = abs(fract(p) - 0.5);
    vec2 aa  = 1.0 - smoothstep(w*0.5 - dp, w*0.5 + dp, a);
    return max(aa.x, aa.y);
}

vec3 cartesian_plane(vec2 uv,
                     vec2 origin,         // where (0,0) should be in uv space
                     float spacing,       // world units per minor cell (in uv units)
                     float zoom,          // zoom factor (1 = 1:1)
                     float minorPx,       // minor line thickness in px
                     float majorPx,       // major line thickness in px
                     float majorEvery)    // draw a major line every N minor cells
{
    // If your uv is [0,1], typically origin = 0.5 to center axes.
    vec2 p = (uv - origin) * zoom / spacing;
    translate(p, vec2(0.3, 0.3));

    float minor = gridLines(p, minorPx);
    float major = gridLines(p / majorEvery, majorPx);

    // Axes at x=0 and y=0 (slightly thicker)
    vec2 dp     = fwidth(p);
    float axisX = 1.0 - smoothstep(0.0, 2.0 * max(dp.y, 1e-6), abs(p.y));
    float axisY = 1.0 - smoothstep(0.0, 2.0 * max(dp.x, 1e-6), abs(p.x));
    float axes  = max(axisX, axisY);

    // Colors
    vec3 bg      = vec3(0.0);
    vec3 minorC  = vec3(0.10);
    vec3 majorC  = vec3(0.30);
    vec3 axesC   = vec3(0.95, 0.30, 0.30);

    vec3 col = bg;
    col = mix(col, minorC, minor);
    col = mix(col, majorC, major);
    col = mix(col, axesC, axes);
    return col;
}

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
  vec2 uv = fragCoord/iResolution.xy;

  vec2 square[2*2];
  square[0] = vec2(0.25, 0.25);
  square[1] = vec2(0.25, 0.75);
  square[2] = vec2(0.75, 0.25);
  square[3] = vec2(0.75, 0.75);
  for (int i = 0; i < 4; i++) {
    square[i] = rotate(square[i], 0.6);
  }

  vec3 col = cartesian_plane(uv, vec2(0.5), 0.05, 1.0, 1.0, 2.0, 5.0);

  fragColor = vec4(col, 1.0);
}