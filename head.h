#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3
void Multiplication(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void ElementWiseMultiplication(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void Tranpose(int A[SIZE][SIZE], int Result[SIZE][SIZE]);
void Addition(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void Substraction(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void Det(int A[SIZE][SIZE], int Result[SIZE][SIZE]);
void Adjoint(int A[SIZE][SIZE], int Result[SIZE][SIZE]);
void Inverse(int A[SIZE][SIZE], int Result[SIZE][SIZE]);

#endif