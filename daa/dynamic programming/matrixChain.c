#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MAX

void printOptimalParens(int i, int j, int **k)
{
    if (i == j)
    {
        printf("A%d", i);
    }
    else
    {
        printf("(");
        printOptimalParens(i, k[i][j], k);
        printOptimalParens(k[i][j] + 1, j, k);
        printf(")");
    }
}

int main()
{
    int n;

    printf("Enter the number of matrices to be multiplied: ");
    scanf("%d", &n);

    int p[n + 1];

    printf("Enter the dimensions: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }

    int **c = (int **)malloc((n + 1) * sizeof(int *));
    int **k = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++)
    {
        c[i] = (int *)malloc((n + 1) * sizeof(int));
        k[i] = (int *)malloc((n + 1) * sizeof(int));
        c[i][i] = 0; // Cost is zero when multiplying one matrix
    }

    for (int d = 1; d < n; d++)
    {
        for (int i = 1; i <= n - d; i++)
        {
            int j = i + d;
            int min = INT_MAX;

            for (int s = i; s < j; s++)
            {
                int q = c[i][s] + c[s + 1][j] + p[i - 1] * p[s] * p[j];
                if (q < min)
                {
                    min = q;
                    k[i][j] = s;
                }
            }
            c[i][j] = min;
        }
    }

    printf("Minimum number of multiplications is: %d\n", c[1][n]);
    printf("Optimal Parenthesization is: ");
    printOptimalParens(1, n, k);
    printf("\n");

    // Free allocated memory
    for (int i = 0; i <= n; i++)
    {
        free(c[i]);
        free(k[i]);
    }
    
    free(c);
    free(k);

    return 0;
}
