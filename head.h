#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3
#define size 2
void Multiplication(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void ElementWiseMultiplication(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void Transpose(int A[SIZE][SIZE], int Result[SIZE][SIZE]);
void Addition(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
void Subtraction(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]);
int Det3(int A[SIZE][SIZE]);
int Det2(int A[size][size]);
void Adjoint(int A[SIZE][SIZE], int Result[SIZE][SIZE]);
void Inverse(int A[SIZE][SIZE], float Result[SIZE][SIZE]);

#endif