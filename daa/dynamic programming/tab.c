//fibbonacci using tabulation

#include <stdio.h>

int fibb(int n)
{

    if (n == 1)
    {

        return 0;
    }

    if (n == 2)
    {

        return 1;
    }

    int F[n];

    F[0] = 0;

    F[1] = 1;

    for (int i = 2; i < n; i++)
    {

        F[i] = F[i - 1] + F[i - 2];
    }

    return F[n - 1];
}

int main()
{

    int n;

    printf("Enter the nth term of the Fibonacci series: ");
    scanf("%d", &n);

    if (n == 0)
    {

        printf("Please enter valid input!");

        return 0;
    }

    printf("The %dth Fibonacci number is: %d\n", n, fibb(n));
}