#include <stdio.h>

int main()
{
    int m, n, c = 0;

    printf("Enter no. of rows: ");
    scanf("%d", &m);

    printf("Enter no. of columns: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter elements for the 2D array:");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Given 2D array:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
                c++;
        }
    }

    printf("\nNo. of non-zero elements: %d\n", c);

    printf("\nThe upper triangular matrix is: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                printf("%d ", a[i][j]);

            else
                printf("  ");
        }
        printf("\n");
    }

    printf("The elements just above and below the main diagonal are: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j || i > j)
                printf("%d ", a[i][j]);

            else
                printf("  ");
        }
        printf("\n");
    }
}