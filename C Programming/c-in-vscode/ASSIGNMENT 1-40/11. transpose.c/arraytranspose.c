//transpose of an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, a[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]); //input elements
        }
    }
    printf("The transpose of the array is: \n");
    for (j = 0; j < n; j++) //printing transpose(notice that the elements are interchanged)
    {
        for (i = 0; i < n; i++) 
        {
            printf("%d ", a[i][j]); //printing elements of transpose array in row major order (i.e. row by row)
        }
        printf("\n");
    }
    
    return 0;
}