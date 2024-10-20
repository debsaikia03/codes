#include <stdio.h>
#include <stdlib.h>

char* recur(int n) {
    if (n == 0) {
        char* result = (char*)malloc(2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    if (n == 1) {
        char* result = (char*)malloc(2);
        result[0] = '1';
        result[1] = '\0';
        return result;
    }

    char* prev = recur(n / 2);
    int len = 0;
    while (prev[len] != '\0') len++;

    char* result = (char*)malloc(len + 2);
    for (int i = 0; i < len; i++) {
        result[i] = prev[i];
    }
    result[len] = (n % 2) + '0';
    result[len + 1] = '\0';

    return result;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    char* binary = recur(n);

    printf("Binary representation: %s\n", binary);

    return 0;
}
