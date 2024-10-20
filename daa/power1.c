#include <stdio.h>

int power(int a, int n)
{

    if (n == 0)
    {

        return 1;
    }

    if (n % 2 == 0)
    {

        int half = power(a, n / 2);
        return half * half;
    }

    return a * power(a, n - 1);
}

int main()
{

    int a;
    int n;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &n);

    int result = power(a, n);

    printf("Result: %d", result);
}