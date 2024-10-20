// C program to Open a File,
// Read from it, And Close the File
#include <stdio.h>
#include <string.h>
int i=0;
int bin(int no)
 {
        i=i*10 + no%2;
        if(no==0)
        return i;
        bin(no/2);
 }

int main()
{

    // Declare the file pointer
    FILE* filePointer;
    FILE* filePointer1;

    // Declare the variable for the data to be read from
    // file
    char dataToBeRead[100];
    char write[20];
    char ch1[20];
    char ch2[20];
    printf("Enter source text file name: ");
    scanf("%s", ch1);
    printf("Enter destination text file name: ");
    scanf("%s", ch2);
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen(ch1, "r");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL) {
        printf("file.txt file failed to open.");
    }
    else {
        printf("The file is now opened.\n");

        // Read the dataToBeRead from the file
        // using fgets() method
        filePointer1 = fopen(ch2, "w");
        int no=0;
        char ch;
        int ct=1;
        while ((ch = fgetc(filePointer)) != EOF && ct<=n) {
            if (ch >= '0' && ch <= '9') {
                no = (no * 10) + (ch - '0'); // Convert character to integer
            } else if (ch == ' ' || ch == '\n') {
                int xx=bin(no);
                printf("%d - ", no);
                printf("%d \n", xx);
                i=0;
                ct++;
                if (filePointer1 == NULL) {
                    printf("GfgTest.c file failed to open.");
                }
                else
                {
                    fprintf(filePointer1, "%d - %d\n", no,xx); // Write the binary representation to the file
                }
                no=0;
            }
        }

        // Closing the file using fclose()
        fclose(filePointer);
        fclose(filePointer1);

        printf(
            "\nData successfully read from file file.c\n");
        printf("The file is now closed.");
    }
    return 0;
}