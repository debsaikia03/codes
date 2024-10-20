#include <stdio.h>
#include <math.h>

int main() {
    double num;

    // Input a number
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check if the number is an integer or floating point
    if (num == (int)num) {
        printf("The number %.6f is an integer.\n", num);
    } else {
        printf("The number %.6f is a floating-point number.\n", num);
    }

    return 0;
}
