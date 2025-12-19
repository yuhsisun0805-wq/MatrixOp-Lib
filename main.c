#include <stdio.h>
#include <stdlib.h>
#include"head.h"
#define SIZE 3
#define size 2
void PrintMatrix(const char* name, int mat[SIZE][SIZE]) {
    printf("--- %s ---\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void PrintMatrixFloat(const char* name, float mat[SIZE][SIZE]) {
    printf("--- %s ---\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%8.3f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int A[SIZE][SIZE] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };
    
    int B[SIZE][SIZE] = {
        {10, 2, 3},
        {4,  5, 6},
        {7,  8, 9}
    };

    int resultInt[SIZE][SIZE];
    float resultFloat[SIZE][SIZE];

    printf("==== Matrix Operations Full Test ====\n\n");
    PrintMatrix("Original Matrix A", A);
    PrintMatrix("Original Matrix B", B);

    Addition(A, B, resultInt);
    PrintMatrix("A + B (Addition)", resultInt);

    Subtraction(A, B, resultInt);
    PrintMatrix("A - B (Subtraction)", resultInt);

    Multiplication(A, B, resultInt);
    PrintMatrix("A * B (Matrix Multiplication)", resultInt);

    ElementWiseMultiplication(A, B, resultInt);
    PrintMatrix("A .* B (Element-wise Multiplication)", resultInt);

    Transpose(A, resultInt);
    PrintMatrix("Transpose of A", resultInt);
    
    int adj[SIZE][SIZE];
    Adjoint(A, adj);
    PrintMatrix("Adjoint Matrix of A", adj);

    int d = Det3(A);
    printf("--- Determinant ---\ndet(A) = %d\n\n", d);

    if (d != 0) {
        Inverse(A, resultFloat);
        PrintMatrixFloat("Inverse of A", resultFloat);
    } else {
        printf("Determinant is 0, inverse cannot be calculated.\n\n");
    }

    return 0;
}