//  Copyright 2023 Siddharth Saha. All Rights Reserved
/**
 * @file
 * @brief Containing example usage of matrix utilities
 *
 * @author Siddharth Saha <sisahawork@gmail.com>
 * @version 1.0
 */

#include <iostream>
#include <vector>

#include "matrix_library/utils/matrix_utils.h"

/**
 * @brief Demonstrating usage of functions in Utilities
 *
 * @return int Returns 0 when suceeds. Non zero code returned on failure
 */
int main() {
  size_t n = 4, m = 3;
  std::vector<std::vector<int>> A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(n, m, 1, 1);

  std::vector<std::vector<int>> B =
      matrix_library::utils::matrix_utils::CreateMatrix(m, n, 1);
  matrix_library::utils::matrix_utils::PrintMatrix(A);
  matrix_library::utils::matrix_utils::PrintMatrix(B);

  if (matrix_library::utils::matrix_utils::IsMatrixEmpty(A) ||
      matrix_library::utils::matrix_utils::IsMatrixEmpty(B)) {
    return -1;
  }
  if (matrix_library::utils::matrix_utils::IsVectorEmpty(A.front()) ||
      matrix_library::utils::matrix_utils::IsVectorEmpty(B.front())) {
    return -2;
  }
  if (!matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
          A, A.front().size()) ||
      !matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
          B, B.front().size())) {
    return -3;
  }
  if (!matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B)) {
    return -4;
  }
  if (matrix_library::utils::matrix_utils::IsMatricesEqual(A, B)) {
    return -5;
  }
  return 0;
}