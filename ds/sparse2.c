#include <stdio.h>

int main()
{

    int m, n, g = 0, h = 0, k = 0, x = 0, y = 0, z = 0;

    printf("Enter size of row and column for sparse matrix: ");
    scanf("%d%d", &m, &n);

    int a[m][n], b[m][n], c[m][n];

    printf("Enter elements for the 1st sparse matrix: ");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elemenets for the 2nd sparse matrix:");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                g++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] != 0)
            {
                h++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i][j] != 0)
            {
                k++;
            }
        }
    }

    int d[g][3];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                d[x][0] = i;
                d[x][1] = j;
                d[x][2] = a[i][j];
                x++;
            }
        }
    }

    int e[h][3];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] != 0)
            {
                e[y][0] = i;
                e[y][1] = j;
                e[y][2] = b[i][j];
                y++;
            }
        }
    }

    int f[k][3];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i][j] != 0)
            {
                f[z][0] = i;
                f[z][1] = j;
                f[z][2] = c[i][j];
                z++;
            }
        }
    }

    printf("\nSparse matrix 1 in 3-tuple format:");
    printf("\nR C Element\n");
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    printf("\nSparse matrix 2 in 3-tuple format:");
    printf("\nR C Element\n");

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition of the matrices in 3-tuple format:");
    printf("\nR C Element\n");

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", f[i][j]);
        }
        printf("\n");
    }
}