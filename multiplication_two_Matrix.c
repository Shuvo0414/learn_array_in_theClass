#include <stdio.h>

int main() 
{
    // Declare variables for matrix dimensions
    int rows1, cols1, rows2, cols2;

    // Take input for Matrix A size
    printf("Enter rows and cols of Matrix A:\n");
    scanf("%d %d", &rows1, &cols1);

    // Take input for Matrix B size
    printf("Enter rows and cols of Matrix B:\n");
    scanf("%d %d", &rows2, &cols2);

    // Check condition for matrix multiplication
    // Rule: cols of A must be equal to rows of B
    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible!\n");
        return 0; // Stop the program if condition fails
    }
    
    // Declare matrices
    int A[rows1][cols1], B[rows2][cols2], C[rows1][cols2];

    // Input elements of Matrix A
    printf("Enter elements of A:\n");
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            scanf("%d", &A[i][j]);

    // Input elements of Matrix B
    printf("Enter elements of B:\n");
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            scanf("%d", &B[i][j]);

    // Print Matrix A
    printf("The elements of A matrix:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("\t%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("The elements of B matrix:\n");
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("\t%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication Logic
    // C[i][j] = sum of (A[i][k] * B[k][j])
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            C[i][j] = 0; // Initialize result cell

            // Multiply row of A with column of B
            for (int k = 0; k < cols1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Result Matrix
    printf("Result matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("\t%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}