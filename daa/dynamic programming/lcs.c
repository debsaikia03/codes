#include <stdio.h>
#include<string.h>

#define size 1000

int memo[size][size];

int max(int m, int n) {
    return (m > n) ? m : n;
}

// // Function to calculate the length of the longest common subsequence
// int lcs(int i, int j, char a[], char b[]) {
//     if (a[i] == '\0' || b[j] == '\0') {
//         return 0;  // Base case: if we reach the end of either string
//     }

//     if (a[i] == b[j]) {
//         return 1 + lcs(i + 1, j + 1, a, b);  // If characters match, move forward in both strings
//     } else {
//         return max(lcs(i + 1, j, a, b), lcs(i, j + 1, a, b));  // If characters don't match, move in one string and find the max
//     }
// }

int lcs(int i, int j, char a[], char b[]){

    if(a[i] == '\0' || b[j] == '\0'){

        return 0;
    }

    if(memo[i][j] != -1){

        return memo[i][j];
    }

    if(a[i] == b[j]){

        memo[i][j] = 1 + lcs(i+1, j+1, a, b);
    }

    else{

        memo[i][j] = max(lcs(i+1, j, a, b), lcs(i, j+1, a, b));
    }

    return memo[i][j];
}

void printLCS(int i, int j, char a[], char b[]){

    if(a[i] == '\0' || b[j] == '\0'){

        return;
    }

    if(a[i] == b[j]){

        printf("%c", a[i]);
        printLCS(i+1, j+1, a, b);
    }

    else{

        if(lcs(i+1, j, a, b) > lcs(i, j+1, a, b)){

            printLCS(i+1, j, a, b);
        }
        else{

            printLCS(i, j+1, a, b);
        }
    }
}

int main() {

    // Initialize memo array with -1 (indicating subproblems not solved yet)
    memset(memo, -1, sizeof(memo));

    int m, n;

    printf("Enter length of string 1: ");
    scanf("%d", &m);

    printf("Enter length of string 2: ");
    scanf("%d", &n);

    // Add 1 to accommodate null terminators
    char str1[m + 1], str2[n + 1];

    printf("Enter string 1 input: ");
    scanf("%s", str1);

    printf("Enter string 2 input: ");
    scanf("%s", str2);

    int i = 0;
    int j = 0;

    printf("Length of longest common subsequence: %d\n", lcs(i, j, str1, str2));

    printf("Longest Common Subsequence: ");
    printLCS(i, j, str1, str2);
}
