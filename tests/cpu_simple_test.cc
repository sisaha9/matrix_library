//  Copyright 2023 Siddharth Saha. All Rights Reserved
/**
 * @file
 * @brief Containing tests for cpu simple version of library
 *
 * @author Siddharth Saha <sisahawork@gmail.com>
 * @version 1.0
 */

#include <gtest/gtest.h>

#include <vector>

#include "matrix_library/cpu_simple/matrix_ops.h"
#include "matrix_library/utils/matrix_utils.h"

TEST(CpuSimpleTest, EmptyMatrixTranspose) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A),
               std::runtime_error);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(B),
               std::runtime_error);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(C),
               std::runtime_error);

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(D),
               std::runtime_error);
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(E),
               std::runtime_error);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(F),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(G),
               std::runtime_error);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(H),
               std::runtime_error);
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(I),
               std::runtime_error);
}

TEST(CpuSimpleTest, EmptyColVectorTranspose) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A),
               std::runtime_error);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(B),
               std::runtime_error);
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(C),
               std::runtime_error);

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(D),
               std::runtime_error);
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(E),
               std::runtime_error);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(F),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(G),
               std::runtime_error);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(H),
               std::runtime_error);
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixTranspose(I),
               std::runtime_error);
}

TEST(CpuSimpleTest, ScalarTranspose) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto A_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A, A_T));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto B_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(B, B_T));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto C_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C, C_T));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto D_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(D, D_T));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto E_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E, E_T));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto F_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(F, F_T));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto G_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(G, G_T));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto H_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(H, H_T));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto I_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(I);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(I, I_T));
}

TEST(CpuSimpleTest, ColVectorTranspose) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto A_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto A_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A_ans, A_T));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto B_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto B_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(B_ans, B_T));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto C_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto C_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C_ans, C_T));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(D_ans, D_T));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto E_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto E_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E_ans, E_T));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto F_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto F_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(F_ans, F_T));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto G_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto G_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(G_ans, G_T));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto H_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto H_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(H_ans, H_T));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto I_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto I_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(I_ans);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(I, I_T));
}

TEST(CpuSimpleTest, RowVectorTranspose) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto A_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto A_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A_ans, A_T));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto B_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto B_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(B_ans, B_T));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto C_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto C_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C_ans, C_T));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto D_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto D_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(D_ans, D_T));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto E_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto E_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E_ans, E_T));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto F_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto F_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(F_ans, F_T));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto G_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto G_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(G_ans, G_T));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto H_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto H_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(H_ans, H_T));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto I_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto I_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(I_ans);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(I, I_T));
}

TEST(CpuSimpleTest, MatrixTranspose) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto A_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  auto A_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(A_ans, A_T));
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto B_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1);
  auto B_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(B_ans, B_T));
  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto C_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0);
  auto C_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(C_ans, C_T));

  auto D = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto D_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  auto D_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(D_ans, D_T));
  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto E_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0f);
  auto E_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(E_ans, E_T));
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto F_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0f);
  auto F_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(F_ans, F_T));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto G_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  auto G_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(G_ans, G_T));
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto H_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0);
  auto H_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(H_ans, H_T));
  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto I_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0);
  auto I_T = matrix_library::cpu_simple::matrix_ops::MatrixTranspose(I_ans);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(I, I_T));
}

TEST(CpuSimpleTest, TwoEmptyMatrixMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  auto BA = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, A));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(BA, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  auto DC = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, A));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(DC, A));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  auto FE = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, A));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(FE, A));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  auto HG = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, G));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(HG, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  auto JI = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, G));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(JI, G));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  auto LK = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, G));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(LK, G));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  auto NM = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, M));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(NM, M));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  auto PO = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, M));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(PO, M));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  auto RQ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, M));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(RQ, M));
}

TEST(CpuSimpleTest, OneEmptyColVectorOneEmptyMatrixMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneScalarOneEmptyMatrixMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneColumnVectorOneEmptyMatrixMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneRowVectorOneEmptyMatrixMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneMatrixOneEmptyMatrixMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(0, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, TwoEmptyColVectorsMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneScalarOneEmptyColVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneColumnVectorOneEmptyColVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneRowVectorOneEmptyColVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto AB_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, AB_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto CD_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, CD_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto EF_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, EF_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto GH_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, GH_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto IJ_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, IJ_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto KL_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, KL_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto MN_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, MN_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto OP_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, OP_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto QR_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 0, 1.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, QR_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneMatrixOneEmptyColVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1);
  auto AB_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, AB_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1);
  auto CD_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, CD_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0);
  auto EF_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, EF_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0f);
  auto GH_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, GH_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0f);
  auto IJ_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, IJ_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0f);
  auto KL_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, KL_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 1.0);
  auto MN_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, MN_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, -1.0);
  auto OP_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, OP_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 0, 0.0);
  auto QR_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 0, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, QR_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, TwoScalarsMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  auto BA = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, A));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(BA, A));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  auto DC = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, A));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(DC, A));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  auto FE = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, E));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(FE, E));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  auto HG = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, G));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(HG, G));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  auto JI = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, H));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(JI, H));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  auto LK = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, K));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(LK, K));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  auto NM = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, M));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(NM, N));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  auto PO = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, M));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(PO, M));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  auto RQ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, Q));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(RQ, Q));
}

TEST(CpuSimpleTest, OneColumnVectorOneScalarMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, E));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, K));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, Q));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneRowVectorOneScalarMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  auto BA = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(BA, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  auto DC = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(DC, A));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto FE = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(FE, E));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  auto HG = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(HG, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  auto JI = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(JI, G));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto LK = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(LK, K));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  auto NM = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(NM, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  auto PO = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(PO, M));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto RQ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(RQ, Q));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneMatrixOneScalarMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, TwoColumnVectorsMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneRowVectorOneColumnVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto AB_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 3);
  auto BA_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 1);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  auto BA = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, AB_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(BA, BA_ans));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto CD_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 3);
  auto DC_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 1);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  auto DC = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, CD_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(DC, DC_ans));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto EF_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0);
  auto FE_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  auto FE = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, EF_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(FE, FE_ans));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto GH_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 3.0f);
  auto HG_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 1.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  auto HG = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, GH_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(HG, HG_ans));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto IJ_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 3.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  auto JI_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 1.0f);
  auto JI = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, IJ_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(JI, JI_ans));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto KL_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  auto LK_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 0.0f);
  auto LK = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, KL_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(LK, LK_ans));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto MN_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 3.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  auto NM_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 1.0);
  auto NM = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, MN_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(NM, NM_ans));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto OP_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 3.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  auto PO_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 1.0);
  auto PO = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, OP_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(PO, PO_ans));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto QR_ans = matrix_library::utils::matrix_utils::CreateMatrix(1, 1, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  auto RQ_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 0.0);
  auto RQ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, QR_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(RQ, RQ_ans));
}

TEST(CpuSimpleTest, OneMatrixOneColumnVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1);
  auto AB_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 3);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, AB_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1);
  auto CD_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 3);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, CD_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0);
  auto EF_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, EF_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0f);
  auto GH_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 3.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, GH_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0f);
  auto IJ_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 3.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, IJ_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0f);
  auto KL_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, KL_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 1.0);
  auto MN_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 3.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, MN_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, -1.0);
  auto OP_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 3.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, OP_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 1, 0.0);
  auto QR_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 1, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, QR_ans));
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, TwoRowVectorsMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, OneMatrixOneRowVectorMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A),
               std::runtime_error);

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C),
               std::runtime_error);

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E),
               std::runtime_error);

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G),
               std::runtime_error);

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I),
               std::runtime_error);

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0f);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K),
               std::runtime_error);

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M),
               std::runtime_error);

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, -1.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O),
               std::runtime_error);

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(1, 3, 0.0);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R),
               std::runtime_error);
  EXPECT_THROW(matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q),
               std::runtime_error);
}

TEST(CpuSimpleTest, TwoMatricesMultiply) {
  auto A = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1);
  auto B = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1);
  auto AB_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 3);
  auto BA_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 2);
  auto AB = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(A, B);
  auto BA = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(B, A);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(AB, AB_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(BA, BA_ans));

  auto C = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1);
  auto D = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1);
  auto CD_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 3);
  auto DC_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 2);
  auto CD = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(C, D);
  auto DC = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(D, C);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(CD, CD_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(DC, DC_ans));

  auto E = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0);
  auto F = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0);
  auto EF_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 0);
  auto FE_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 0);
  auto EF = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(E, F);
  auto FE = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(F, E);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(EF, EF_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(FE, FE_ans));

  auto G = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0f);
  auto H = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0f);
  auto GH_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 3.0f);
  auto HG_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 2.0f);
  auto GH = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(G, H);
  auto HG = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(H, G);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(GH, GH_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(HG, HG_ans));

  auto I = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0f);
  auto J = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0f);
  auto IJ_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 3.0f);
  auto IJ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(I, J);
  auto JI_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 2.0f);
  auto JI = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(J, I);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(IJ, IJ_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(JI, JI_ans));

  auto K = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0f);
  auto L = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0f);
  auto KL_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 0.0f);
  auto KL = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(K, L);
  auto LK_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 0.0f);
  auto LK = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(L, K);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(KL, KL_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(LK, LK_ans));

  auto M = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 1.0);
  auto N = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 1.0);
  auto MN_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 3.0);
  auto MN = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(M, N);
  auto NM_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 2.0);
  auto NM = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(N, M);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(MN, MN_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(NM, NM_ans));

  auto O = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, -1.0);
  auto P = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, -1.0);
  auto OP_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 3.0);
  auto OP = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(O, P);
  auto PO_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 2.0);
  auto PO = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(P, O);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(OP, OP_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(PO, PO_ans));

  auto Q = matrix_library::utils::matrix_utils::CreateMatrix(2, 3, 0.0);
  auto R = matrix_library::utils::matrix_utils::CreateMatrix(3, 2, 0.0);
  auto QR_ans = matrix_library::utils::matrix_utils::CreateMatrix(2, 2, 0.0);
  auto QR = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(Q, R);
  auto RQ_ans = matrix_library::utils::matrix_utils::CreateMatrix(3, 3, 0.0);
  auto RQ = matrix_library::cpu_simple::matrix_ops::MatrixMultiply(R, Q);
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(QR, QR_ans));
  ASSERT_TRUE(matrix_library::utils::matrix_utils::IsMatricesEqual(RQ, RQ_ans));
}
