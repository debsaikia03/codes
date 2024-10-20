#include <stdio.h>

int main()
{

    int m, n, c = 0, f = 0, x = 0, y = 0;

    printf("Enter size of row and column for sparse matrix: ");
    scanf("%d%d", &m, &n);

    int a[m][n];

    printf("Enter elements for the matrix: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int d[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d[j][i] = a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                c++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (d[i][j] != 0)
            {
                f++;
            }
        }
    }

    int b[c][3];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                b[x][0] = i;
                b[x][1] = j;
                b[x][2] = a[i][j];
                x++;
            }
        }
    }

    printf("\nGiven sparse matrix in 3-tuple format:");
    printf("\nR C Element\n");

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    int e[f][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (d[i][j] != 0)
            {
                e[y][0] = i;
                e[y][1] = j;
                e[y][2] = d[i][j];
                y++;
            }
        }
    }

    printf("\nTranspose of given sparse matrix in 3-tuple format: \n");
    printf("R C Element\n");

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

    return 0;
}
