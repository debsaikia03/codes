#include <stdio.h>

int main() {
    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Individual digits: ");

    // Printing individual digits
    while (number != 0) {
        digit = number % 10;
        printf("%d ", digit);
        number /= 10;
    }

    printf("\n");

    return 0;
}
