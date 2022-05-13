//Write a program in C to perform addition and subtraction of two matrices.

#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &a[0][0], &a[0][1]);
    printf("Enter the elements of first matrix: ");
    
    for (i = 0; i < a[0][0]; i++){
        for (j = 0; j < a[0][1]; j++)
            scanf("%d", &a[i][j]);}
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &b[0][0], &b[0][1]);
    printf("Enter the elements of second matrix: ");
    for (i = 0; i < b[0][0]; i++)
        for (j = 0; j < b[0][1]; j++)
            scanf("%d", &b[i][j]);
    printf("\nFirst matrix is:\n");
    for (i = 0; i < a[0][0]; i++)
    {
        for (j = 0; j < a[0][1]; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\nSecond matrix is:\n");
    for (i = 0; i < b[0][0]; i++)
    {
        for (j = 0; j < b[0][1]; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    printf("\nAddition of two matrices is:\n");
    for (i = 0; i < a[0][0]; i++)
    {
        for (j = 0; j < a[0][1]; j++)
            c[i][j] = a[i][j] + b[i][j];
        printf("%d\t", c[i][j]);
    }
    printf("\nSubtraction of two matrices is:\n");
    for (i = 0; i < a[0][0]; i++)
    {
        for (j = 0; j < a[0][1]; j++)
            c[i][j] = a[i][j] - b[i][j];
        printf("%d\t", c[i][j]);
    }
    return 0;
}
