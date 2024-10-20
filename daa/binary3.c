#include <stdio.h>

// Recursive function to convert integer part to binary
void convInt(int n) {
    if (n > 1) {
        convInt(n / 2);
    }
    printf("%d", n % 2);
}

// Recursive function to convert fractional part to binary
void convFact(float n, int p) {

    if (p == 0) {
        return;
    }

    n = n * 2;

    int bit = (int)n;

    if (bit == 1) {
        printf("1");
        n = n - bit;
    } else {
        printf("0");
    }

    convFact(n, p - 1);
}

int main() {

    float num;
    int p;

    printf("Enter a decimal number: ");
    scanf("%f",&num);

    printf("Enter precision: ");
    scanf("%d",&p);

    int intPart = (int)num;
    float fracPart = num - intPart;

    // Convert and print integer part
    convInt(intPart);

    // Convert and print fractional part with a precision of 'p' bits
    printf(".");
    convFact(fracPart, p);

    return 0;
}
