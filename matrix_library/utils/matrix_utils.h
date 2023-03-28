//  Copyright 2023 Siddharth Saha. All Rights Reserved
/**
 * @file
 * @brief Containing declaration of matrix utilities
 *
 * @author Siddharth Saha <sisahawork@gmail.com>
 * @version 1.0
 */

#ifndef MATRIX_LIBRARY__UTILS__MATRIX_UTILS_H_
#define MATRIX_LIBRARY__UTILS__MATRIX_UTILS_H_

#include <iostream>
#include <type_traits>
#include <vector>

namespace matrix_library {
namespace utils {
namespace matrix_utils {

/**
 * @brief Create a Matrix of provided dimensions. Fills with value provided
 *
 * @tparam T Any numeric type
 * @param num_rows Number of rows in matrix
 * @param num_cols Number of columns in matrix
 * @param value_to_fill Value to fill in matrix
 * @return std::vector<std::vector<T>> 2D matrix with provided dimensions and
 * value
 * @throws Runtime error if we are trying to make a matrix with 0 rows and non
 * zero columns
 * value
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline std::vector<std::vector<T>> CreateMatrix(size_t num_rows,
                                                size_t num_cols,
                                                T value_to_fill) {
  // If number of rows is 0 and number of columns > 0 then this is impossible
  if (num_rows == 0 && num_cols != 0) {
    throw std::runtime_error("Impossible Matrix received");
  }
  // Initializing matrix
  std::vector<std::vector<T>> matrix;
  // Creating specified number of rows
  matrix.resize(num_rows);
  for (auto& row : matrix) {
    // Resize fills vector with value as 2nd argument
    row.resize(num_cols, value_to_fill);
  }
  return matrix;
}

/**
 * @brief Create a Sequential Matrix of provided dimensions. Values filled
 * based off start value. Each subsequent value in the row is then the previous
 * value incremented by the increment value given. The values in new rows is
 * based of the last value in the previous row + increment
 *
 * @tparam T Any numeric type
 * @param num_rows Number of rows in matrix
 * @param num_cols Number of columns in matrix
 * @param start Base value to start with
 * @param increment Value to increment with (Note: In unsigned matrices this
 * can't be negative)
 * @return std::vector<std::vector<T>> 2D matrix as specified
 * @throws Runtime error if we are trying to make a matrix with 0 rows and non
 * zero columns
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline std::vector<std::vector<T>> CreateSequentialMatrix(size_t num_rows,
                                                          size_t num_cols,
                                                          T start,
                                                          T increment) {
  // If number of rows is 0 and number of columns > 0 then this is impossible
  if (num_rows == 0 && num_cols != 0) {
    throw std::runtime_error("Impossible Matrix received");
  }
  // Initializing matrix
  std::vector<std::vector<T>> matrix;
  matrix.resize(num_rows);
  // Initializing value
  T current_value = start;
  for (auto& row : matrix) {
    // Resizing to accommodate for values
    row.resize(num_cols);
    for (auto& elem : row) {
      // Filling current value and then incrementing current value
      elem = current_value;
      current_value += increment;
    }
  }
  return matrix;
}

/**
 * @brief Just prints the matrix for debugging purpose
 *
 * @tparam T Any numeric type
 * @param matrix 2D marix to print
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline void PrintMatrix(const std::vector<std::vector<T>>& matrix) {
  for (const auto& row : matrix) {
    for (const auto& elem : row) {
      std::cout << elem << ", ";
    }
    std::cout << std::endl;
  }
}

/**
 * @brief Checks if Matrix has no rows
 *
 * @tparam T Any numeric type
 * @param matrix 2D matrix to check
 * @return true If matrix has no rows
 * @return false If matrix has rows
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline bool IsMatrixEmpty(const std::vector<std::vector<T>>& matrix) {
  // Vector method to see if it is empty
  return matrix.empty();
}

/**
 * @brief Checks if Matrix row is empty
 *
 * @tparam T Any numeric type
 * @param vec Matrix row
 * @return true If matrix row is empty
 * @return false If matrix row is not empty
 */

template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline bool IsVectorEmpty(const std::vector<T>& vec) {
  // Vector method to see if it is empty
  return vec.empty();
}

/**
 * @brief Check if Matrix is following dimensions
 *
 * @tparam T Any numeric type
 * @param matrix 2D matrix
 * @param num_cols Number of columns supposed to be in matrix
 * @return true If all rows have same number of columns as in parameter
 * @return false If any one row does not have same number of columns as
 * parameter
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline bool IsMatrixFollowingDimensions(
    const std::vector<std::vector<T>>& matrix, size_t num_cols) {
  // If matrix is empty and number of cols is 0 then it is following dimensions
  if (IsMatrixEmpty(matrix) && num_cols == 0) {
    return true;
    // Else if matrix is empty but number of cols is not 0 then it isn't
    // following dimensions
  } else if (IsMatrixEmpty(matrix) && num_cols != 0) {
    return false;
  }
  // For every row in matrix
  for (const auto& row : matrix) {
    // If it's size is not same as number of columns return false
    if (row.size() != num_cols) {
      std::cout << row.size() << " " << num_cols << std::endl;
      return false;
    }
  }
  // If we have reached here it means row sizes match columns and we have no
  // mismatch
  return true;
}

/**
 * @brief Checks if 2 matrices can multiply
 *
 * @tparam T Any numeric type
 * @param A Matrix A in A * B
 * @param B Matrix B in A * B
 * @return true If A and B can be multiplied
 * @return false If A and B cannot be multiplied
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline bool CanMatricesMultiply(const std::vector<std::vector<T>>& A,
                                const std::vector<std::vector<T>>& B) {
  // If Matrix A and B are empty they can be multiplied
  if (IsMatrixEmpty(A) && IsMatrixEmpty(B)) {
    return true;
  }
  // If Matrix A is empty it cannot be multiplied
  if (IsMatrixEmpty(A)) {
    std::cerr << "Matrix A is empty" << std::endl;
    return false;
  }
  // If Matrix B is empty and A has 0 columns they can be multiplied
  if (IsVectorEmpty(A.front()) && IsMatrixEmpty(B)) {
    return true;
  }
  // If Matrix B is empty it cannot be multiplied
  if (IsMatrixEmpty(B)) {
    std::cerr << "Matrix B is empty" << std::endl;
    return false;
  }
  // If Matrix A has no columns it cannot be multiplied
  if (IsVectorEmpty(A.front())) {
    std::cerr << "Matrix A has no columns" << std::endl;
    return false;
  }
  // If Matrix A has a column mismatch it cannot be multiplied
  if (!IsMatrixFollowingDimensions(A, A.front().size())) {
    std::cerr << "Matrix A has a column mismatch" << std::endl;
    return false;
  }
  // If Matrix B has a column mismatch it cannot be multiplied
  if (!IsMatrixFollowingDimensions(B, B.front().size())) {
    std::cerr << "Matrix B has a column mismatch" << std::endl;
    return false;
  }
  // If Matrix A number of columns is not equal to Matrix B number of rows it
  // cannot be multiplied
  if (A.front().size() != B.size()) {
    std::cerr << "Number of columns in Matrix A and number of rows in Matrix B "
                 "don't match"
              << std::endl;
    return false;
  }
  // If all conditions so far have been satisfied matrices can be multiplied
  return true;
}

/**
 * @brief Checks if 2 matrices have the same contents
 *
 * @tparam T Any numeric type
 * @param A Matrix A
 * @param B Matrix B
 * @return true If both matrices have same contents
 * @return false If both matrices do not have same contents
 */
template <typename T, typename = typename std::enable_if<
                          std::is_arithmetic<T>::value, T>::type>
inline bool IsMatricesEqual(const std::vector<std::vector<T>>& A,
                            const std::vector<std::vector<T>>& B) {
  // If the sizes are not equal they are not equal
  if (A.size() != B.size()) {
    return false;
  }
  // If the sizes are equal and they are both empty then they are equal
  if (IsMatrixEmpty(A)) {
    return true;
  }
  // If the column sizes are not equal they are not equal
  if (A.front().size() != B.front().size()) {
    return false;
  }
  // If both matrices are not following the given dimensions then they are
  // ill-formed and cannot be determined if they are equal
  if (!IsMatrixFollowingDimensions(A, A.front().size()) ||
      !IsMatrixFollowingDimensions(B, B.front().size())) {
    return false;
  }
  for (size_t i = 0; i < A.size(); i++) {
    for (size_t j = 0; j < A.front().size(); j++) {
      // If any of the elements are not equal then they are not equal
      if (A.at(i).at(j) != B.at(i).at(j)) {
        return false;
      }
    }
  }
  // If all conditions so far have passed then they are equal
  return true;
}
}  // namespace matrix_utils
}  // namespace utils
}  // namespace matrix_library

#endif
