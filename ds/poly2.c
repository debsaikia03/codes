#include <stdio.h>

int main()
{
    int m, n, c;

    printf("Enter highest degree for 1st polynomial: ");
    scanf("%d", &m);

    int x = m + 1;

    int a[x];

    printf("Enter the elements: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter highest degree for 2nd polynomial: ");
    scanf("%d", &n);

    int y = n + 1;
    int b[y];

    printf("Enter the elements: ");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }

    c=x*y;

    int z[c];


    for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                z[i + j] = z[i + j] + (a[i] * b[j]);
            }
        }
    



    for (int i = 0; i < c; i++)
    {
        printf("%d ", z[i]);
    }
}