//  Copyright 2023 Siddharth Saha. All Rights Reserved
/**
 * @file
 * @brief Containing example usage of matrix operations in CPU simple version of
 * library
 *
 * @author Siddharth Saha <sisahawork@gmail.com>
 * @version 1.0
 */

#include <iostream>
#include <vector>

#include "matrix_library/cpu_simple/matrix_ops.h"
#include "matrix_library/utils/matrix_utils.h"

/**
 * @brief Demonstrating usage of functions in CPU Simple
 *
 * @return int Returns 0 when suceeds. Non zero code returned on failure
 */
int main() {
  size_t n = 4, m = 3;
  std::vector<std::vector<int>> A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(n, m, 1, 1);
  std::vector<std::vector<int>> B =
      matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A);
  std::vector<std::vector<int>> C =
      matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  matrix_library::utils::matrix_utils::PrintMatrix(A);
  matrix_library::utils::matrix_utils::PrintMatrix(B);
  matrix_library::utils::matrix_utils::PrintMatrix(C);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto F = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, E);
  matrix_library::utils::matrix_utils::PrintMatrix(D);
  matrix_library::utils::matrix_utils::PrintMatrix(E);
  matrix_library::utils::matrix_utils::PrintMatrix(F);
  return 0;
}