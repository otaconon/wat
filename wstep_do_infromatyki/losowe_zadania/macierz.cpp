#include "../templates/print_templates.hpp"
#include "../templates/array_templates.hpp"
#include "../templates/matrix_templates.hpp"

using namespace std;

int main() {
  int A[3][3] = {{2, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int B[3][3] = {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
  int C[3][3] = {0};
  matmul(A, B, C);

  print_matrix(C);
}
