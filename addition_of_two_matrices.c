#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("enter the rows and columns of two matrices:\n");
    scanf("%d %d", &rows, &cols);
    
    int A[rows][cols], B[rows][cols], C[rows][cols];
    
    printf("enter the elements of A matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("enter the elements of B matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("The elements of A matrixs\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("\t%d\t", A[i][j]);
        }
        printf("\n");
    }
    
    printf("The elements of B matrixs\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("\t%d\t", B[i][j]);
        }
        printf("\n");
    }
    
    //for Matrix addition 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("The addition of two matrixs\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("\t%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}