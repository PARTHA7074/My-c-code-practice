#include <stdio.h>
#include<conio.h>
int main()
{
    int p, q, k, l;

    printf("Enter row number of the 1st matrix: ");
    scanf("%d", &p);
    printf("Enter column number of the 1st matrix: ");
    scanf("%d", &q);
    printf("Enter row number of the 2nd matrix: ");
    scanf("%d", &k);
    printf("Enter column number of the 2nd matrix: ");
    scanf("%d", &l);
    int matrix[p][q];
    int matrix2[k][l];
    int multimatrix[p][l];
    if (q == k)
    {
        printf("\nGive input for the 1st matrix:\n");
        for (int i = 0; i < p; i++)
        {
            printf("Enter the element of the row %d:\n", i + 1);
            for (int j = 0; j < q; j++)
            {
                printf("A(%d,%d) = ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
            
        }
        printf("\nGive input for the 2nd matrix:\n");
        for (int i = 0; i < k; i++)
        {
            printf("Enter the element of the row %d:\n", i + 1);
            for (int j = 0; j < l; j++)
            {
                printf("A(%d,%d) = ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < l; j++)
            {
                multimatrix[i][j] = 0;
            }
        }
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < l; j++)
            {
                for (int k = 0; k < q; k++)
                {
                    multimatrix[i][j] += matrix[i][k] * matrix2[k][j];
                }
            }
        }
        printf("\nThe multiplication of the two matrixes is:\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < l; j++)
            {
                printf("%d ",multimatrix[i][j]);
            }
            printf("\n");
            
        }
        
    }
    else
    {
        printf("The matrix multiplication does not exit");
    }
    getch();

    return 0;
}