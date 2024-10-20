#include <stdio.h>

void com(int *x, int *y)
{
    if (*x > *y)
        printf("%d is greater than %d", *x, *y);

    else if (*y > *x)
        printf("%d is greater than %d", *y, *x);

    else
        printf("Both numbers are same");
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    com(&a, &b);

    return 0;
}