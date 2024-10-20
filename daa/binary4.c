#include <stdio.h>
#include <string.h>

// Recursive function to convert integer part to binary and store in the string
void decimalToBinaryInteger(int n, char *binaryStr) {
    if (n > 1) {
        decimalToBinaryInteger(n / 2, binaryStr);
    }
    int length = strlen(binaryStr);
    binaryStr[length] = (n % 2) + '0'; // Convert int to char and append
    binaryStr[length + 1] = '\0'; // Null-terminate the string
}

// Recursive function to convert fractional part to binary and store in the string
void decimalToBinaryFraction(float n, char *binaryStr, int precision) {
    if (precision == 0) {
        return;
    }

    n = n * 2;
    int bit = (int)n;
    if (bit == 1) {
        strcat(binaryStr, "1");
        n = n - bit;
    } else {
        strcat(binaryStr, "0");
    }

    decimalToBinaryFraction(n, binaryStr, precision - 1);
}

int main() {
    float decimalNumber = 12.45;
    int integerPart = (int)decimalNumber;
    float fractionalPart = decimalNumber - integerPart;

    char binaryStr[128] = ""; // Buffer for storing binary string

    // Convert and store integer part
    decimalToBinaryInteger(integerPart, binaryStr);

    // Append '.' to binary string
    strcat(binaryStr, ".");

    // Convert and store fractional part with a precision of 10 bits
    decimalToBinaryFraction(fractionalPart, binaryStr, 10);

    // Print the result
    printf("Binary representation: %s\n", binaryStr);

    return 0;
}
