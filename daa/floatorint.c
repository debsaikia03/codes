#include <stdio.h>

int main() {
    // Declare a float to hold the user input
    float n;

    // Take user input
    printf("Enter a floating-point number: ");
    scanf("%f", &n);

    // Get the integer part by casting n to int
    int d = (int)n;

    // Get the fractional part, then scale it to store as an integer
    int f = (int)((n - d) * 1000 + 0.5);  // Multiply by 1000 to shift three decimal places

    // Print the integer part and the fractional part
    printf("Integer Part: %d\n", d);
    printf("Fractional Part: %d\n", f);

    return 0;
}
