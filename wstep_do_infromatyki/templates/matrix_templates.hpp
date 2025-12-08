
template <typename T, size_t N, size_t M, size_t P>
void matmul(T (&A)[M][N], T (&B)[N][P], T (&C)[M][P]) {
  for (size_t i = 0; i < M; i++) {
    for (size_t j = 0; j < P; j++) {
      T dot = T{};
      for (size_t k = 0; k < N; k++) {
        dot += A[i][k] * B[k][j];
      }
      C[i][j] = dot;
    }
  }
}

template <typename T, size_t N>
T dot(T (&u)[N], T (&v)[N]) {
  T res = T{};
  for (size_t i = 0; i < N; i++) {
    res += u[i] * v[i];
  }

  return res;
}