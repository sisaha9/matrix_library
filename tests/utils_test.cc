//  Copyright 2023 Siddharth Saha. All Rights Reserved
/**
 * @file
 * @brief Containing tests for matrix utilities
 *
 * @author Siddharth Saha <sisahawork@gmail.com>
 * @version 1.0
 */

#include <gtest/gtest.h>

#include <vector>

#include "matrix_library/utils/matrix_utils.h"

TEST(UtilsTest, CreateMatrixEmptyPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_TRUE(A.size() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_TRUE(B.size() == 0);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_TRUE(C.size() == 0);
}

TEST(UtilsTest, CreateMatrixEmptyNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_TRUE(A.size() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_TRUE(B.size() == 0);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_TRUE(C.size() == 0);
}

TEST(UtilsTest, CreateMatrixEmptyZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_TRUE(A.size() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_TRUE(B.size() == 0);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_TRUE(C.size() == 0);
}

TEST(UtilsTest, CreateMatrixZeroRowsOneColPositive) {
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, 1),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, 1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, 1.0),
               std::runtime_error);
}

TEST(UtilsTest, CreateMatrixZeroRowsOneColNegative) {
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, -1),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, -1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, -1.0),
               std::runtime_error);
}

TEST(UtilsTest, CreateMatrixZeroRowsOneColZero) {
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, 0),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, 0.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateMatrix(0, 1, 0.0),
               std::runtime_error);
}

TEST(UtilsTest, CreateMatrixOneRowZeroColsPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().empty());
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().empty());
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().empty());
}

TEST(UtilsTest, CreateMatrixOneRowZeroColsNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().empty());
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().empty());
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().empty());
}

TEST(UtilsTest, CreateMatrixOneRowZeroColsZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().empty());
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().empty());
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().empty());
}

TEST(UtilsTest, CreateMatrixScalarPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().size() == 1);
  ASSERT_TRUE(A.front().front() == 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().size() == 1);
  ASSERT_TRUE(B.front().front() == 1.0f);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().size() == 1);
  ASSERT_TRUE(C.front().front() == 1.0);
}

TEST(UtilsTest, CreateMatrixScalarNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().size() == 1);
  ASSERT_TRUE(A.front().front() == -1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().size() == 1);
  ASSERT_TRUE(B.front().front() == -1.0f);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().size() == 1);
  ASSERT_TRUE(C.front().front() == -1.0);
}

TEST(UtilsTest, CreateMatrixScalarZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().size() == 1);
  ASSERT_TRUE(A.front().front() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().size() == 1);
  ASSERT_TRUE(B.front().front() == 0.0f);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().size() == 1);
  ASSERT_TRUE(C.front().front() == 0.0);
}

TEST(UtilsTest, CreateVectorRowPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  std::vector<std::vector<int>> A_ans = {{1, 1, 1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  std::vector<std::vector<float>> B_ans = {{1.0f, 1.0f, 1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  std::vector<std::vector<double>> C_ans = {{1.0, 1.0, 1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateVectorRowNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  std::vector<std::vector<int>> A_ans = {{-1, -1, -1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  std::vector<std::vector<float>> B_ans = {{-1.0f, -1.0f, -1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  std::vector<std::vector<double>> C_ans = {{-1.0, -1.0, -1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateVectorRowZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  std::vector<std::vector<int>> A_ans = {{0, 0, 0}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  std::vector<std::vector<float>> B_ans = {{0.0f, 0.0f, 0.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  std::vector<std::vector<double>> C_ans = {{0.0, 0.0, 0.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateVectorColPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  std::vector<std::vector<int>> A_ans = {{1}, {1}, {1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  std::vector<std::vector<float>> B_ans = {{1.0f}, {1.0f}, {1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  std::vector<std::vector<double>> C_ans = {{1.0}, {1.0}, {1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateVectorColNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  std::vector<std::vector<int>> A_ans = {{-1}, {-1}, {-1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  std::vector<std::vector<float>> B_ans = {{-1.0f}, {-1.0f}, {-1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  std::vector<std::vector<double>> C_ans = {{-1.0}, {-1.0}, {-1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateVectorColZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  std::vector<std::vector<int>> A_ans = {{0}, {0}, {0}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  std::vector<std::vector<float>> B_ans = {{0.0f}, {0.0f}, {0.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  std::vector<std::vector<double>> C_ans = {{0.0}, {0.0}, {0.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateMatrixPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  std::vector<std::vector<int>> A_ans = {{1, 1}, {1, 1}, {1, 1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  std::vector<std::vector<float>> B_ans = {
      {1.0f, 1.0f}, {1.0f, 1.0f}, {1.0f, 1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  std::vector<std::vector<double>> C_ans = {{1.0, 1.0}, {1.0, 1.0}, {1.0, 1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateMatrixNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1);
  std::vector<std::vector<int>> A_ans = {{-1, -1}, {-1, -1}, {-1, -1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0f);
  std::vector<std::vector<float>> B_ans = {
      {-1.0f, -1.0f}, {-1.0f, -1.0f}, {-1.0f, -1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0);
  std::vector<std::vector<double>> C_ans = {
      {-1.0, -1.0}, {-1.0, -1.0}, {-1.0, -1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateMatrixZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0);
  std::vector<std::vector<int>> A_ans = {{0, 0}, {0, 0}, {0, 0}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0f);
  std::vector<std::vector<float>> B_ans = {
      {0.0f, 0.0f}, {0.0f, 0.0f}, {0.0f, 0.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0);
  std::vector<std::vector<double>> C_ans = {{0.0, 0.0}, {0.0, 0.0}, {0.0, 0.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
}

TEST(UtilsTest, CreateSeqMatrixEmptyPositive) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, 1, 1);
  ASSERT_TRUE(A.size() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 1.0f, 1.0f);
  ASSERT_TRUE(B.size() == 0);
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 1.0, 1.0);
  ASSERT_TRUE(C.size() == 0);
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, 1, -1);
  ASSERT_TRUE(D.size() == 0);
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 1.0f, -1.0f);
  ASSERT_TRUE(E.size() == 0);
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 1.0, -1.0);
  ASSERT_TRUE(F.size() == 0);
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, 1, 0);
  ASSERT_TRUE(G.size() == 0);
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 1.0f, 0.0f);
  ASSERT_TRUE(H.size() == 0);
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 1.0, 0.0);
  ASSERT_TRUE(I.size() == 0);
}

TEST(UtilsTest, CreateSeqMatrixEmptyNegative) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, -1, 1);
  ASSERT_TRUE(A.size() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, -1.0f, 1.0f);
  ASSERT_TRUE(B.size() == 0);
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, -1.0, 1.0);
  ASSERT_TRUE(C.size() == 0);
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, -1, -1);
  ASSERT_TRUE(D.size() == 0);
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, -1.0f, -1.0f);
  ASSERT_TRUE(E.size() == 0);
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, -1.0, -1.0);
  ASSERT_TRUE(F.size() == 0);
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, -1, 0);
  ASSERT_TRUE(G.size() == 0);
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, -1.0f, 0.0f);
  ASSERT_TRUE(H.size() == 0);
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, -1.0, 0.0);
  ASSERT_TRUE(I.size() == 0);
}

TEST(UtilsTest, CreateSeqMatrixEmptyZero) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, 0, 1);
  ASSERT_TRUE(A.size() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 0.0f, 1.0f);
  ASSERT_TRUE(B.size() == 0);
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 0.0, 1.0);
  ASSERT_TRUE(C.size() == 0);
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, 0, -1);
  ASSERT_TRUE(D.size() == 0);
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 0.0f, -1.0f);
  ASSERT_TRUE(E.size() == 0);
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 0.0, -1.0);
  ASSERT_TRUE(F.size() == 0);
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 0, 0, 0);
  ASSERT_TRUE(G.size() == 0);
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 0.0f, 0.0f);
  ASSERT_TRUE(H.size() == 0);
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      0, 0, 0.0, 0.0);
  ASSERT_TRUE(I.size() == 0);
}

TEST(UtilsTest, CreateSeqMatrixZeroRowsOneColPositive) {
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, 1, 1),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 1.0f, 1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 1.0, 1.0),
               std::runtime_error);
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, 1, -1),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 1.0f, -1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 1.0, -1.0),
               std::runtime_error);
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, 1, 0),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 1.0f, 0.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 1.0, 0.0),
               std::runtime_error);
}

TEST(UtilsTest, CreateSeqMatrixZeroRowsOneColNegative) {
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, -1, 1),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, -1.0f, 1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, -1.0, 1.0),
               std::runtime_error);
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, -1, -1),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, -1.0f, -1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, -1.0, -1.0),
               std::runtime_error);
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, -1, 0),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, -1.0f, 0.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, -1.0, 0.0),
               std::runtime_error);
}

TEST(UtilsTest, CreateSeqMatrixZeroRowsOneColZero) {
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, 0, 1),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 0.0f, 1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 0.0, 1.0),
               std::runtime_error);
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, 0, -1),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 0.0f, -1.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 0.0, -1.0),
               std::runtime_error);
  EXPECT_THROW(
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(0, 1, 0, 0),
      std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 0.0f, 0.0f),
               std::runtime_error);
  EXPECT_THROW(matrix_library::utils::matrix_utils::CreateSequentialMatrix(
                   0, 1, 0.0, 0.0),
               std::runtime_error);
}

TEST(UtilsTest, CreateSeqMatrixOneRowZeroColsPositive) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, 1, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().empty());
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 1.0f, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().empty());
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 1.0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().empty());
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, 1, -1);
  ASSERT_TRUE(D.size() == 1);
  ASSERT_TRUE(D.front().empty());
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 1.0f, -1.0f);
  ASSERT_TRUE(E.size() == 1);
  ASSERT_TRUE(E.front().empty());
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 1.0, -1.0);
  ASSERT_TRUE(F.size() == 1);
  ASSERT_TRUE(F.front().empty());
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, 1, 0);
  ASSERT_TRUE(G.size() == 1);
  ASSERT_TRUE(G.front().empty());
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 1.0f, 0.0f);
  ASSERT_TRUE(H.size() == 1);
  ASSERT_TRUE(H.front().empty());
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 1.0, 0.0);
  ASSERT_TRUE(I.size() == 1);
  ASSERT_TRUE(I.front().empty());
}

TEST(UtilsTest, CreateSeqMatrixOneRowZeroColsNegative) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, -1, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().empty());
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, -1.0f, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().empty());
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, -1.0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().empty());
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, -1, -1);
  ASSERT_TRUE(D.size() == 1);
  ASSERT_TRUE(D.front().empty());
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, -1.0f, -1.0f);
  ASSERT_TRUE(E.size() == 1);
  ASSERT_TRUE(E.front().empty());
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, -1.0, -1.0);
  ASSERT_TRUE(F.size() == 1);
  ASSERT_TRUE(F.front().empty());
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, -1, 0);
  ASSERT_TRUE(G.size() == 1);
  ASSERT_TRUE(G.front().empty());
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, -1.0f, 0.0f);
  ASSERT_TRUE(H.size() == 1);
  ASSERT_TRUE(H.front().empty());
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, -1.0, 0.0);
  ASSERT_TRUE(I.size() == 1);
  ASSERT_TRUE(I.front().empty());
}

TEST(UtilsTest, CreateSeqMatrixOneRowZeroColsZero) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, 0, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().empty());
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 0.0f, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().empty());
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 0.0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().empty());
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, 0, -1);
  ASSERT_TRUE(D.size() == 1);
  ASSERT_TRUE(D.front().empty());
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 0.0f, -1.0f);
  ASSERT_TRUE(E.size() == 1);
  ASSERT_TRUE(E.front().empty());
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 0.0, -1.0);
  ASSERT_TRUE(F.size() == 1);
  ASSERT_TRUE(F.front().empty());
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 0, 0, 0);
  ASSERT_TRUE(G.size() == 1);
  ASSERT_TRUE(G.front().empty());
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 0.0f, 0.0f);
  ASSERT_TRUE(H.size() == 1);
  ASSERT_TRUE(H.front().empty());
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 0, 0.0, 0.0);
  ASSERT_TRUE(I.size() == 1);
  ASSERT_TRUE(I.front().empty());
}

TEST(UtilsTest, CreateSeqMatrixScalarPositive) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, 1, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().size() == 1);
  ASSERT_TRUE(A.front().front() == 1);
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 1.0f, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().size() == 1);
  ASSERT_TRUE(B.front().front() == 1.0f);
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 1.0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().size() == 1);
  ASSERT_TRUE(C.front().front() == 1.0);
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, 1, -1);
  ASSERT_TRUE(D.size() == 1);
  ASSERT_TRUE(D.front().size() == 1);
  ASSERT_TRUE(D.front().front() == 1);
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 1.0f, -1.0f);
  ASSERT_TRUE(E.size() == 1);
  ASSERT_TRUE(E.front().size() == 1);
  ASSERT_TRUE(E.front().front() == 1.0f);
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 1.0, -1.0);
  ASSERT_TRUE(F.size() == 1);
  ASSERT_TRUE(F.front().size() == 1);
  ASSERT_TRUE(F.front().front() == 1.0);
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, 1, 0);
  ASSERT_TRUE(G.size() == 1);
  ASSERT_TRUE(G.front().size() == 1);
  ASSERT_TRUE(G.front().front() == 1);
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 1.0f, 0.0f);
  ASSERT_TRUE(H.size() == 1);
  ASSERT_TRUE(H.front().size() == 1);
  ASSERT_TRUE(H.front().front() == 1.0f);
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 1.0, 0.0);
  ASSERT_TRUE(I.size() == 1);
  ASSERT_TRUE(I.front().size() == 1);
  ASSERT_TRUE(I.front().front() == 1.0);
}

TEST(UtilsTest, CreateSeqMatrixScalarNegative) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, -1, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().size() == 1);
  ASSERT_TRUE(A.front().front() == -1);
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, -1.0f, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().size() == 1);
  ASSERT_TRUE(B.front().front() == -1.0f);
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, -1.0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().size() == 1);
  ASSERT_TRUE(C.front().front() == -1.0);
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, -1, -1);
  ASSERT_TRUE(D.size() == 1);
  ASSERT_TRUE(D.front().size() == 1);
  ASSERT_TRUE(D.front().front() == -1);
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, -1.0f, -1.0f);
  ASSERT_TRUE(E.size() == 1);
  ASSERT_TRUE(E.front().size() == 1);
  ASSERT_TRUE(E.front().front() == -1.0f);
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, -1.0, -1.0);
  ASSERT_TRUE(F.size() == 1);
  ASSERT_TRUE(F.front().size() == 1);
  ASSERT_TRUE(F.front().front() == -1.0);
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, -1, 0);
  ASSERT_TRUE(G.size() == 1);
  ASSERT_TRUE(G.front().size() == 1);
  ASSERT_TRUE(G.front().front() == -1);
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, -1.0f, 0.0f);
  ASSERT_TRUE(H.size() == 1);
  ASSERT_TRUE(H.front().size() == 1);
  ASSERT_TRUE(H.front().front() == -1.0f);
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, -1.0, 0.0);
  ASSERT_TRUE(I.size() == 1);
  ASSERT_TRUE(I.front().size() == 1);
  ASSERT_TRUE(I.front().front() == -1.0);
}

TEST(UtilsTest, CreateSeqMatrixScalarZero) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, 0, 1);
  ASSERT_TRUE(A.size() == 1);
  ASSERT_TRUE(A.front().size() == 1);
  ASSERT_TRUE(A.front().front() == 0);
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 0.0f, 1.0f);
  ASSERT_TRUE(B.size() == 1);
  ASSERT_TRUE(B.front().size() == 1);
  ASSERT_TRUE(B.front().front() == 0.0f);
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 0.0, 1.0);
  ASSERT_TRUE(C.size() == 1);
  ASSERT_TRUE(C.front().size() == 1);
  ASSERT_TRUE(C.front().front() == 0.0);
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, 0, -1);
  ASSERT_TRUE(D.size() == 1);
  ASSERT_TRUE(D.front().size() == 1);
  ASSERT_TRUE(D.front().front() == 0);
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 0.0f, -1.0f);
  ASSERT_TRUE(E.size() == 1);
  ASSERT_TRUE(E.front().size() == 1);
  ASSERT_TRUE(E.front().front() == 0.0f);
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 0.0, -1.0);
  ASSERT_TRUE(F.size() == 1);
  ASSERT_TRUE(F.front().size() == 1);
  ASSERT_TRUE(F.front().front() == 0.0);
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 1, 0, 0);
  ASSERT_TRUE(G.size() == 1);
  ASSERT_TRUE(G.front().size() == 1);
  ASSERT_TRUE(G.front().front() == 0);
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 0.0f, 0.0f);
  ASSERT_TRUE(H.size() == 1);
  ASSERT_TRUE(H.front().size() == 1);
  ASSERT_TRUE(H.front().front() == 0.0f);
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 1, 0.0, 0.0);
  ASSERT_TRUE(I.size() == 1);
  ASSERT_TRUE(I.front().size() == 1);
  ASSERT_TRUE(I.front().front() == 0.0);
}

TEST(UtilsTest, CreateSeqVectorRowPositive) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, 1, 1);
  std::vector<std::vector<int>> A_ans = {{1, 2, 3}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 1.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {{1.0f, 2.0f, 3.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 1.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{1.0, 2.0, 3.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, 1, -1);
  std::vector<std::vector<int>> D_ans = {{1, 0, -1}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 1.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {{1.0f, 0.0f, -1.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 1.0, -1.0);
  std::vector<std::vector<double>> F_ans = {{1.0, 0.0, -1.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, 1, 0);
  std::vector<std::vector<int>> G_ans = {{1, 1, 1}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 1.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {{1.0f, 1.0f, 1.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 1.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{1.0, 1.0, 1.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqVectorRowNegative) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, -1, 1);
  std::vector<std::vector<int>> A_ans = {{-1, 0, 1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, -1.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {{-1.0f, 0.0f, 1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, -1.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{-1.0, 0.0, 1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, -1, -1);
  std::vector<std::vector<int>> D_ans = {{-1, -2, -3}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, -1.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {{-1.0f, -2.0f, -3.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, -1.0, -1.0);
  std::vector<std::vector<double>> F_ans = {{-1.0, -2.0, -3.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, -1, 0);
  std::vector<std::vector<int>> G_ans = {{-1, -1, -1}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, -1.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {{-1.0f, -1.0f, -1.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, -1.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{-1.0, -1.0, -1.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqVectorRowZero) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, 0, 1);
  std::vector<std::vector<int>> A_ans = {{0, 1, 2}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 0.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {{0.0f, 1.0f, 2.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 0.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{0.0, 1.0, 2.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, 0, -1);
  std::vector<std::vector<int>> D_ans = {{0, -1, -2}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 0.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {{0.0f, -1.0f, -2.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 0.0, -1.0);
  std::vector<std::vector<double>> F_ans = {{0.0, -1.0, -2.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(1, 3, 0, 0);
  std::vector<std::vector<int>> G_ans = {{0, 0, 0}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 0.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {{0.0f, 0.0f, 0.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      1, 3, 0.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{0.0, 0.0, 0.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqVectorColPositive) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, 1, 1);
  std::vector<std::vector<int>> A_ans = {{1}, {2}, {3}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 1.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {{1.0f}, {2.0f}, {3.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 1.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{1.0}, {2.0}, {3.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, 1, -1);
  std::vector<std::vector<int>> D_ans = {{1}, {0}, {-1}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 1.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {{1.0f}, {0.0f}, {-1.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 1.0, -1.0);
  std::vector<std::vector<double>> F_ans = {{1.0}, {0.0}, {-1.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, 1, 0);
  std::vector<std::vector<int>> G_ans = {{1}, {1}, {1}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 1.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {{1.0f}, {1.0f}, {1.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 1.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{1.0}, {1.0}, {1.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqVectorColNegative) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, -1, 1);
  std::vector<std::vector<int>> A_ans = {{-1}, {0}, {1}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, -1.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {{-1.0f}, {0.0f}, {1.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, -1.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{-1.0}, {0.0}, {1.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, -1, -1);
  std::vector<std::vector<int>> D_ans = {{-1}, {-2}, {-3}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, -1.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {{-1.0f}, {-2.0f}, {-3.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, -1.0, -1.0);
  std::vector<std::vector<double>> F_ans = {{-1.0}, {-2.0}, {-3.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, -1, 0);
  std::vector<std::vector<int>> G_ans = {{-1}, {-1}, {-1}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, -1.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {{-1.0f}, {-1.0f}, {-1.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, -1.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{-1.0}, {-1.0}, {-1.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqVectorColZero) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, 0, 1);
  std::vector<std::vector<int>> A_ans = {{0}, {1}, {2}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 0.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {{0.0f}, {1.0f}, {2.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 0.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{0.0}, {1.0}, {2.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, 0, -1);
  std::vector<std::vector<int>> D_ans = {{0}, {-1}, {-2}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 0.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {{0.0f}, {-1.0f}, {-2.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 0.0, -1.0);
  std::vector<std::vector<double>> F_ans = {{0.0}, {-1.0}, {-2.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 1, 0, 0);
  std::vector<std::vector<int>> G_ans = {{0}, {0}, {0}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 0.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {{0.0f}, {0.0f}, {0.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 1, 0.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{0.0}, {0.0}, {0.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqMatrixPositive) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, 1, 1);
  std::vector<std::vector<int>> A_ans = {{1, 2}, {3, 4}, {5, 6}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 1.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {
      {1.0f, 2.0f}, {3.0f, 4.0f}, {5.0f, 6.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 1.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{1.0, 2.0}, {3.0, 4.0}, {5.0, 6.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, 1, -1);
  std::vector<std::vector<int>> D_ans = {{1, 0}, {-1, -2}, {-3, -4}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 1.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {
      {1.0f, 0.0f}, {-1.0f, -2.0f}, {-3.0f, -4.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 1.0, -1.0);
  std::vector<std::vector<double>> F_ans = {
      {1.0, 0.0}, {-1.0, -2.0}, {-3.0, -4.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, 1, 0);
  std::vector<std::vector<int>> G_ans = {{1, 1}, {1, 1}, {1, 1}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 1.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {
      {1.0f, 1.0f}, {1.0f, 1.0f}, {1.0f, 1.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 1.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{1.0, 1.0}, {1.0, 1.0}, {1.0, 1.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqMatrixNegative) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, -1, 1);
  std::vector<std::vector<int>> A_ans = {{-1, 0}, {1, 2}, {3, 4}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, -1.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {
      {-1.0f, 0.0f}, {1.0f, 2.0f}, {3.0f, 4.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, -1.0, 1.0);
  std::vector<std::vector<double>> C_ans = {
      {-1.0, 0.0}, {1.0, 2.0}, {3.0, 4.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, -1, -1);
  std::vector<std::vector<int>> D_ans = {{-1, -2}, {-3, -4}, {-5, -6}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, -1.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {
      {-1.0f, -2.0f}, {-3.0f, -4.0f}, {-5.0f, -6.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, -1.0, -1.0);
  std::vector<std::vector<double>> F_ans = {
      {-1.0, -2.0}, {-3.0, -4.0}, {-5.0, -6.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, -1, 0);
  std::vector<std::vector<int>> G_ans = {{-1, -1}, {-1, -1}, {-1, -1}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, -1.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {
      {-1.0f, -1.0f}, {-1.0f, -1.0f}, {-1.0f, -1.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, -1.0, 0.0);
  std::vector<std::vector<double>> I_ans = {
      {-1.0, -1.0}, {-1.0, -1.0}, {-1.0, -1.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, CreateSeqMatrixZero) {
  auto A =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, 0, 1);
  std::vector<std::vector<int>> A_ans = {{0, 1}, {2, 3}, {4, 5}};
  ASSERT_TRUE(std::equal(A.begin(), A.end(), A_ans.begin()));
  auto B = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 0.0f, 1.0f);
  std::vector<std::vector<float>> B_ans = {
      {0.0f, 1.0f}, {2.0f, 3.0f}, {4.0f, 5.0f}};
  ASSERT_TRUE(std::equal(B.begin(), B.end(), B_ans.begin()));
  auto C = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 0.0, 1.0);
  std::vector<std::vector<double>> C_ans = {{0.0, 1.0}, {2.0, 3.0}, {4.0, 5.0}};
  ASSERT_TRUE(std::equal(C.begin(), C.end(), C_ans.begin()));
  auto D =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, 0, -1);
  std::vector<std::vector<int>> D_ans = {{0, -1}, {-2, -3}, {-4, -5}};
  ASSERT_TRUE(std::equal(D.begin(), D.end(), D_ans.begin()));
  auto E = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 0.0f, -1.0f);
  std::vector<std::vector<float>> E_ans = {
      {0.0f, -1.0f}, {-2.0f, -3.0f}, {-4.0f, -5.0f}};
  ASSERT_TRUE(std::equal(E.begin(), E.end(), E_ans.begin()));
  auto F = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 0.0, -1.0);
  std::vector<std::vector<double>> F_ans = {
      {0.0, -1.0}, {-2.0, -3.0}, {-4.0, -5.0}};
  ASSERT_TRUE(std::equal(F.begin(), F.end(), F_ans.begin()));
  auto G =
      matrix_library::utils::matrix_utils::CreateSequentialMatrix(3, 2, 0, 0);
  std::vector<std::vector<int>> G_ans = {{0, 0}, {0, 0}, {0, 0}};
  ASSERT_TRUE(std::equal(G.begin(), G.end(), G_ans.begin()));
  auto H = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 0.0f, 0.0f);
  std::vector<std::vector<float>> H_ans = {
      {0.0f, 0.0f}, {0.0f, 0.0f}, {0.0f, 0.0f}};
  ASSERT_TRUE(std::equal(H.begin(), H.end(), H_ans.begin()));
  auto I = matrix_library::utils::matrix_utils::CreateSequentialMatrix(
      3, 2, 0.0, 0.0);
  std::vector<std::vector<double>> I_ans = {{0.0, 0.0}, {0.0, 0.0}, {0.0, 0.0}};
  ASSERT_TRUE(std::equal(I.begin(), I.end(), I_ans.begin()));
}

TEST(UtilsTest, MatrixEqualityTestZero) {
  std::vector<std::vector<int>> A, B;
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  std::vector<std::vector<float>> C, D;
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  std::vector<std::vector<double>> E, F;
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityVectorZeroColsPositive) {
  std::vector<std::vector<int>> A, B;
  A = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1);
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 2);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  std::vector<std::vector<float>> C, D;
  C = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0f);
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 2.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  std::vector<std::vector<double>> E, F;
  E = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0);
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 2.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityVectorZeroColsNegative) {
  std::vector<std::vector<int>> A, B;
  A = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -1);
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -2);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  std::vector<std::vector<float>> C, D;
  C = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -1.0f);
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -2.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  std::vector<std::vector<double>> E, F;
  E = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -1.0);
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, -2.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityVectorZeroColsZero) {
  std::vector<std::vector<int>> A, B;
  A = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0);
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  std::vector<std::vector<float>> C, D;
  C = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0.0f);
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  std::vector<std::vector<double>> E, F;
  E = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0.0);
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestScalarPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestScalarNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestScalarZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestVectorColumnPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestVectorColumnNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestVectorColumnZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestVectorRowPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestVectorRowNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestVectorRowZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestMatrixPositive) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestMatrixNegative) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -2);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -2.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -2.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, MatrixEqualityTestMatrixZero) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));
  B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, B));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));
  D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, D));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
  F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, F));
}

TEST(UtilsTest, IsMatrixEmptyEmptyMatrix) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(A));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(B));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(C));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(D));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(E));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(F));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(G));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(H));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixEmpty(I));
}

TEST(UtilsTest, IsMatrixEmptyScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(A));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(B));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(C));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(D));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(E));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(F));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(G));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(H));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(I));
}

TEST(UtilsTest, IsMatrixEmptyRowVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(A));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(B));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(C));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(D));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(E));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(F));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(G));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(H));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(I));
}

TEST(UtilsTest, IsMatrixEmptyColumnVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(A));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(B));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(C));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(D));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(E));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(F));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(G));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(H));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(I));
}

TEST(UtilsTest, IsMatrixEmptyFullMatrix) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(A));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(B));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(C));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(D));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(E));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(F));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(G));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(H));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsMatrixEmpty(I));
}

TEST(UtilsTest, IsVectorEmptyEmptyVector) {
  std::vector<int> A;
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> B;
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> C;
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));
}

TEST(UtilsTest, IsVectorEmptySingularVector) {
  std::vector<int> A = {1};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> B = {1.0f};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> C = {1.0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));

  std::vector<int> D = {-1};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> E = {-1.0f};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> F = {-1.0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));

  std::vector<int> G = {0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> H = {0.0f};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> I = {0.0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));
}

TEST(UtilsTest, IsVectorEmptyMultiElementVector) {
  std::vector<int> A = {1, 1, 1};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> B = {1.0f, 1.0f, 1.0f};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> C = {1.0, 1.0, 1.0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));

  std::vector<int> D = {-1, -1, -1};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> E = {-1.0f, -1.0f, -1.0f};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> F = {-1.0, -1.0, -1.0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));

  std::vector<int> G = {0, 0, 0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(A));
  std::vector<float> H = {0.0f, 0.0f, 0.0f};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(B));
  std::vector<double> I = {0.0, 0.0, 0.0};
  ASSERT_FALSE(matrix_library::utils::matrix_utils::IsVectorEmpty(C));
}

TEST(UtilsTest, IsMatrixFollowingDimensionsEmptyMatrix) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 1));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 1));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 1));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 1));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 1));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 1));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 1));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 1));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 1));
}

TEST(UtilsTest, IsMatrixFollowingDimensionsEmptyColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 1));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 1));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 1));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 1));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 1));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 1));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 1));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 1));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  ASSERT_TRUE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 0));
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 1));
}

TEST(UtilsTest, IsMatrixFollowingDimensionsColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      A, A.front().size()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      B, B.front().size()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      C, C.front().size()));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      D, D.front().size()));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      E, E.front().size()));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      F, F.front().size()));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      G, G.front().size()));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      H, H.front().size()));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      I, I.front().size()));
}

TEST(UtilsTest, IsMatrixFollowingDimensionsRowVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      A, A.front().size()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      B, B.front().size()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      C, C.front().size()));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      D, D.front().size()));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      E, E.front().size()));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      F, F.front().size()));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      G, G.front().size()));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      H, H.front().size()));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      I, I.front().size()));
}

TEST(UtilsTest, IsMatrixFollowingDimensionsScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      A, A.front().size()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      B, B.front().size()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      C, C.front().size()));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      D, D.front().size()));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      E, E.front().size()));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      F, F.front().size()));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      G, G.front().size()));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      H, H.front().size()));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      I, I.front().size()));
}

TEST(UtilsTest, IsMatrixFollowingDimensionsMatrix) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(A, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      A, A.front().size()));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(B, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      B, B.front().size()));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(C, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      C, C.front().size()));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(D, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      D, D.front().size()));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(E, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      E, E.front().size()));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(F, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      F, F.front().size()));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(G, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      G, G.front().size()));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(H, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      H, H.front().size()));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  ASSERT_FALSE(
      matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(I, 0));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatrixFollowingDimensions(
      I, I.front().size()));
}

TEST(UtilsTest, CanMatricesMultiplyTwoEmpty) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneScalarOneEmpty) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneEmptyColVectorOneEmpty) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneColVectorOneEmpty) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneRowVectorOneEmpty) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneMatrixOneEmpty) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyTwoScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneEmptyColVectorOneScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneColVectorOneScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneRowVectorOneScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneMatrixOneScalar) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyTwoEmptyColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneColVectorOneEmptyColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneRowVectorOneEmptyColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneMatrixOneEmptyColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyTwoColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneRowVectorOneColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneMatrixOneColVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyTwoRowVectors) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyOneMatrixOneRowVector) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}

TEST(UtilsTest, CanMatricesMultiplyTwoMatrices) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(A, B));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(B, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(C, D));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(D, C));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(E, F));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(F, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(G, H));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(H, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(I, J));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(J, I));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(K, L));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(L, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(M, N));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(N, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(O, P));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(P, O));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(Q, R));
  ASSERT_FALSE(matrix_library::utils::matrix_utils::CanMatricesMultiply(R, Q));
}