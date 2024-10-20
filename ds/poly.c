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

    if (m > n)
    {
        c = m + 1;
    }

    else
    {
        c = n + 1;
    }

    int z[c];

    if (x < y)
    {
        for (int i = 0; i < x; i++)
        {
            z[i] = a[i] + b[i];
        }

        for (int i = x; i < y; i++)
        {
            z[i] = b[i];
        }

        for (int i = 0; i < c; i++)
        {
            printf("%d", z[i]);
        }
    }

    if (x > y)
    {
        for (int i = 0; i < y; i++)
        {
            z[i] = a[i] + b[i];
        }

        for (int i = y; i < x; i++)
        {
            z[i] = a[i];
        }

        for (int i = 0; i < c; i++)
        {
            printf("%d", z[i]);
        }
    }
}
