#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and cols of Matrix A:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of Matrix B:\n");
    scanf("%d %d", &r2, &c2);

    // Check condition
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter elements of A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    printf("The elements of A matrixs\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("\t%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("The elements of B matrixs\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            printf("\t%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0; 

            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Result matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("\t%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}