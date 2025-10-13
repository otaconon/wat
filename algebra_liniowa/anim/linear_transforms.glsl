
float length_squared(vec2 v, vec2 w) {
  return (v.x - w.x)*(v.x - w.x) + (v.y - w.y)*(v.y - w.y);
}

float minimum_distance(vec2 v, vec2 w, vec2 p) {
  float l2 = length_squared(v, w);
  if (l2 == 0.0)
    return distance(p, v);

  float t = max(0.0, min(1.0, dot(p - v, w - v) / l2));
  vec2 projection = v + t * (w - v);

  return distance(p, projection);
}

bool segment(vec2 v, vec2 w, vec2 p, float width) {
  if (minimum_distance(v, w, p) <= width) {
    return true;
  }
  return false;
}

const int N = 10; //grid size
vec2[N * N] generate_grid() {
  vec2 points[N * N] ;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      float n = float(N);
      points[i * N + j] = vec2(float(i) / n, float(j) / n);
    }
  }

  return points;
}

vec3 grid(vec2 uv, float line_width, vec2[N*N] points) {
  vec3 color = vec3(0.0, 0.5, 0.7);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int idx = i*N + j;

      int r = idx + 1;
      if (j != N-1)
        if (segment(points[idx], points[r], uv, line_width))
          return color;

      int t = (i-1)*N + j;
      if (i != 0)
        if (segment(points[idx], points[t], uv, line_width))
          return vec3(0.5, 0.5, 0.0);
    }
  }
  return vec3(0.0, 0.0, 0.0);
}

vec3 cartesian_plane(vec2 uv, float line_width, vec2[2*2] points) {
  vec3 color = vec3(0.5, 0.7, 0.2);
  if (segment(points[0], points[1], uv, line_width))
    return color;
  if (segment(points[0], points[2], uv, line_width))
    return color;
  if (segment(points[3], points[1], uv, line_width))
    return color;
  if (segment(points[3], points[2], uv, line_width))
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

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
  vec2 uv = fragCoord/iResolution.xy;

  vec2 points[N*N] = generate_grid();
  for (int i = 0; i < N*N; i++) {
    points[i] = rotate(points[i], 0.6);
    points[i] = translate(points[i], vec2(0.05, 0.05));
  }
  vec3 col = grid(uv, 0.005, points);

  vec2 square[2*2];
  square[0] = vec2(0.1, 0.1);
  square[1] = vec2(0.1, 0.5);
  square[2] = vec2(0.5, 0.1);
  square[3] = vec2(0.5, 0.5);
  //col = cartesian_plane(uv, 0.01, square);

  fragColor = vec4(col, 1.0);
}