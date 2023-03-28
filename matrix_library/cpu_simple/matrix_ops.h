//  Copyright 2023 Siddharth Saha. All Rights Reserved
/**
 * @file
 * @brief Containing declaration of matrix operations in CPU simple version of
 * library
 *
 * @author Siddharth Saha <sisahawork@gmail.com>
 * @version 1.0
 */

#ifndef MATRIX_LIBRARY__CPU_SIMPLE__MATRIX_OPS_H_
#define MATRIX_LIBRARY__CPU_SIMPLE__MATRIX_OPS_H_

#include <type_traits>
#include <vector>

#include "matrix_library/utils/matrix_utils.h"

namespace matrix_library {
namespace cpu_simple {
namespace matrix_ops {

/**
 * @brief Multiplies 2 matrices if possible otherwise it throws an error
 *
 * @tparam T Any numeric type
 * @param A Matrix A to be multiplied in A * B
 * @param B Matrix B to be multipled in A * B
 * @return std::vector<std::vector<T>> Matrix C that is equal to A * B
 * @throws Runtime Error if the 2 matrices cannot be multiplied
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline std::vector<std::vector<T>> MatrixMultiply(
    const std::vector<std::vector<T>>& A,
    const std::vector<std::vector<T>>& B) {
  // If the 2 matrices cannot be multiplied throw a runtime error
  if (!matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B)) {
    throw std::runtime_error("Matrices A and B cannot multiply");
  }
  // Create a matrix C with A number of rows and B number of columns
  // Fill with default value of 0 to sum over
  std::vector<std::vector<T>> C;
  if (matrix_library::utils::matrix_utils::IsMatrixEmpty(B)) {
    C.resize(A.size());
    return C;
  }
  C = matrix_library::utils::matrix_utils::CreateMatrix(
      A.size(), B.front().size(), static_cast<T>(0));

  // If C has no rows just return it
  if (matrix_library::utils::matrix_utils::IsMatrixEmpty(C)) {
    return C;
  }
  // If C has no colums just return it
  if (matrix_library::utils::matrix_utils::IsVectorEmpty(C.front())) {
    return C;
  }
  // Matrix multiplication done to be cache friendly
  // In this the innermost loop variable is accessed in each row which is loaded
  // contiguously in vector minimizing cache misses
  // i loops over every row in A
  // k loops over every column in A and row in B
  // j loops over every column in B
  for (size_t i = 0; i < A.size(); i++) {
    for (size_t k = 0; k < A.front().size(); k++) {
      for (size_t j = 0; j < B.front().size(); j++) {
        C.at(i).at(j) += (A.at(i).at(k) * B.at(k).at(j));
      }
    }
  }
  return C;
}

/**
 * @brief Transposes matrix if possible
 *
 * @tparam T Any numeric type
 * @param original_matrix 2D matrix that we will make a transpose of
 * @return std::vector<std::vector<T>> Transposed 2D matrix
 * @throws Runtime error if the original matrix has no row
 * @throws Runtime error if the original matrix has no columns
 * @throws Runtime error if the original matrix has column count mismatch
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline std::vector<std::vector<T>> MatrixTranspose(
    const std::vector<std::vector<T>>& original_matrix) {
  // If matrix has no rows then this cannot be transposed
  if (matrix_library::utils::matrix_utils::IsMatrixEmpty(original_matrix)) {
    throw std::runtime_error("Original matrix has no rows");
  }
  // If matrix has no columns then this cannot be transposed
  if (matrix_library::utils::matrix_utils::IsVectorEmpty(
          original_matrix.front())) {
    throw std::runtime_error("Original matrix has no column");
  }
  // If matrix has a column mismatch it cannot be transposed
  if (!matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
          original_matrix, original_matrix.front().size())) {
    throw std::runtime_error("Original matrix has a column mismatch");
  }
  // Initialize a transposed matrix with transposed dimensions
  std::vector<std::vector<T>> transposed_matrix =
      matrix_library::utils::matrix_utils::CreateMatrix(
          original_matrix.front().size(), original_matrix.size(),
          static_cast<T>(0));
  // Iterating through matrix elements
  for (size_t i = 0; i < original_matrix.size(); i++) {
    for (size_t j = 0; j < original_matrix.front().size(); j++) {
      // Storing element in flipped location in transposed matrix
      transposed_matrix.at(j).at(i) = original_matrix.at(i).at(j);
    }
  }
  // Return transposed matrix
  return transposed_matrix;
}

}  // namespace matrix_ops
}  // namespace cpu_simple
}  // namespace matrix_library

#endif