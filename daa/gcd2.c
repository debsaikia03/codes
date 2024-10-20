#include <stdio.h>
#include <string.h>

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main() {
    // Declare file pointers
    FILE *filePointer, *filePointer1;

    // File names
    char ch1[20], ch2[20];

    // Get file names from the user
    printf("Enter source text file name: ");
    scanf("%s", ch1);
    printf("Enter destination text file name: ");
    scanf("%s", ch2);

    // Open the input file for reading
    filePointer = fopen(ch1, "r");
    if (filePointer == NULL) {
        printf("Error opening %s\n", ch1);
        return 1; // Indicate an error
    }
    printf("The file %s is now opened.\n", ch1);

    // Open the output file for writing
    filePointer1 = fopen(ch2, "w");
    if (filePointer1 == NULL) {
        printf("Error opening %s\n", ch2);
        fclose(filePointer); // Close the input file
        return 1; // Indicate an error
    }

    // Read numbers from the input file and calculate GCD
    int num1, num2;
    while (fscanf(filePointer, "%d %d", &num1, &num2) == 2) {
        int xx = gcd(num1, num2);
        printf("Number 1: %d, Number 2: %d, GCD: %d\n", num1, num2, xx);
        fprintf(filePointer1, "GCD of %d and %d is %d\n", num1, num2, xx); // Write to output file
    }

    // Close the files
    fclose(filePointer);
    fclose(filePointer1);

    printf("\nData successfully read from file %s and written to %s\n", ch1, ch2);
    printf("The files are now closed.\n");

    return 0;
}