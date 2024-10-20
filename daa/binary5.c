#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Recursive function to convert the integer part of a number to binary
char* recur(int n) {
    // Base case for 0
    if (n == 0) {
        
        char* result = (char*)malloc(2); // Allocate memory for "0\0"
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    // Base case for 1
    if (n == 1) {

        char* result = (char*)malloc(2); // Allocate memory for "1\0"
        result[0] = '1';
        result[1] = '\0';
        return result;
    }

    // Recursive call to process the higher bits
    char* prev = recur(n / 2);
    int len = strlen(prev); // Get the length of the previous binary string

    // Allocate memory for the new binary string
    char* result = (char*)malloc(len + 2);
    strcpy(result, prev); // Copy the previous binary string
    result[len] = (n % 2) + '0'; // Add the current bit
    result[len + 1] = '\0'; // Null-terminate the string

    free(prev); // Free the memory of the previous binary string
    return result;
}

// Function to convert the fractional part of a number to binary
char* convert_fraction(double fraction, int precision) {
    char* result = (char*)malloc(precision + 2); // Allocate memory for the fractional part
    result[0] = '.'; // Start the string with a decimal point
    int index = 1;

    // Loop to generate binary digits up to the specified precision
    while (fraction > 0 && index < precision + 1) {
        fraction *= 2;
        if (fraction >= 1) {
            result[index] = '1';
            fraction -= 1; // Subtract 1 from the fraction if the bit is 1
        } else {
            result[index] = '0';
        }
        index++;
    }

    result[index] = '\0'; // Null-terminate the string
    return result;
}

int main() {
    double num;
    int precision;

    // Prompt the user to enter a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    // Prompt the user to enter the desired precision for the fractional part
    printf("Enter the precision for fractional part: ");
    scanf("%d", &precision);

    // Separate the integer and fractional parts of the number
    int integer_part = (int)num;
    double fractional_part = num - integer_part;

    // Convert the integer part to binary
    char* integer_binary = recur(integer_part);

    // Convert the fractional part to binary
    char* fractional_binary = convert_fraction(fractional_part, precision);

    // Allocate memory for the combined binary representation
    char* result = (char*)malloc(strlen(integer_binary) + strlen(fractional_binary) + 1);
    strcpy(result, integer_binary); // Copy the integer part
    strcat(result, fractional_binary); // Append the fractional part

    // Display the binary representation
    printf("Binary representation: %s\n", result);

    // Free allocated memory
    free(integer_binary);
    free(fractional_binary);
    free(result);

    return 0;
}
