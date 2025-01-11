#include <stdio.h>

int main() {
    int num;
    char byte1, byte2, byte3, byte4;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Extract each byte from the integer
    byte1 = (num & 0xFF);             // Extract lowest byte
    byte2 = (num >> 8) & 0xFF;        // Shift right by 8 bits and extract
    byte3 = (num >> 16) & 0xFF;       // Shift right by 16 bits and extract
    byte4 = (num >> 24) & 0xFF;       // Shift right by 24 bits and extract

    // Print each byte as a character
    printf("Byte 1: %c\n", byte1);
    printf("Byte 2: %c\n", byte2);
    printf("Byte 3: %c\n", byte3);
    printf("Byte 4: %c\n", byte4);

    return 0;
}
