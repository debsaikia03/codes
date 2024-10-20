#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr1, **arr2;
    int r, c;

    printf("Enter the no. of rows: ");
    scanf("%d", &r);
    printf("Enter the no. of columns: ");
    scanf("%d", &c);

    printf("Enter the values for the first 2D array: \n");

    arr1 = (int **)malloc(r * sizeof(int *));

    for (int i = 0; i < r; i++)
    {
        arr1[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the values for the second 2D array: \n");

    arr2 = (int **)malloc(r * sizeof(int *));

    for (int i = 0; i < r; i++)
    {
        arr2[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr3[r][c];

    for (int k = 0; k < r; k++)
    {
        for (int l = 0; l < c; l++)
        {
            arr3[k][l] = arr1[k][l] + arr2[k][l];
        }
    }

    printf("The sum of the two 2D arrays is: \n");
    for (int m = 0; m < r; m++)
    {
        for (int n = 0; n < c; n++)
        {
            printf("%d ", arr3[m][n]);
        }
    }

    return 0;
}