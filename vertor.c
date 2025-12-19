#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#define SIZE 3
#define size 2
void Addition(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]){
 int i,j;
 for(i=0;i<SIZE;i++){
    for(j=0;j<SIZE;j++){
        Result[i][j]=A[i][j]+B[i][j];
    }
 }
}
void Subtraction(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]){
 int i,j;
 for(i=0;i<SIZE;i++){
    for(j=0;j<SIZE;j++){
        Result[i][j]=A[i][j]-B[i][j];
    }
 }
}
void Multiplication(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]){
    int i,j,k;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            Result[i][j]=0;
            for(k=0;k<SIZE;k++){
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void ElementWiseMultiplication(int A[SIZE][SIZE], int B[SIZE][SIZE], int Result[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            Result[i][j] = A[i][j] * B[i][j];
        }
    }
}
void Transpose(int A[SIZE][SIZE], int Result[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            Result[j][i] = A[i][j];
        }
    }
}
int Det3(int A[SIZE][SIZE]){
    int det;
    det = A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])
        - A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])
        + A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
    return det;
}
int Det2(int A[size][size]){
    int det;
    det = A[0][0]*A[1][1] - A[0][1] * A[1][0];
    return det;
}
void Adjoint(int A[SIZE][SIZE], int Result[SIZE][SIZE]) {
    int temp[size][size]; 
    int sign;
    
    for(int i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            int row = 0;
            for(int r=0; r<SIZE; r++) {
                if(r == i) continue;
                int col = 0;
                for(int c=0; c<SIZE; c++) {
                    if(c == j) continue; 
                    temp[row][col] = A[r][c];
                    col++;
                }
                row++;
            }
            sign = ((i+j)%2 == 0) ? 1 : -1;
            Result[j][i] = sign * Det2(temp); 
        }
    }
}
void Inverse(int A[SIZE][SIZE], float Result[SIZE][SIZE]){
    int det = Det3(A);
    if(det == 0) {
        return;
    }

    int adj[SIZE][SIZE];
    Adjoint(A, adj);

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            Result[i][j] = (float)adj[i][j] / det;
        }
    }
}