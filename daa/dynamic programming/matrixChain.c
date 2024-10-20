#include <stdio.h>
#include <limits.h> // For INT_MAX

int main()
{
    int n;

    printf("Enter the number of matrices to be multiplied: ");
    scanf("%d", &n);

    int p[n + 1]; // dimensions

    printf("Enter the dimensions: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }

    // initializing cost table
    int c[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        c[i][i] = 0; // Cost is zero when multiplying one matrix
    }

    // initializing parentheses storing table
    int k[n + 1][n + 1];

    int j, min;

    for (int d = 1; d < n; d++)
    { // outer loop-> number of differences

        for (int i = 1; i <= n - d; i++)
        { // middle loop -> matrix elements with index [i,j] having the same difference (j-i)

            j = i + d;
            min = INT_MAX;

            for (int s = i; s < j; s++)
            { // inner loop-> i <= k < j

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
    
}
