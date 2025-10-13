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
  for (int i = 0; i < N*N; i++) {
    if (distance(uv, points[i]) <= 0.005) {
      return color;
    }
  }
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
  vec3 col = grid(uv, 0.01, points);

  fragColor = vec4(col, 1.0);
}