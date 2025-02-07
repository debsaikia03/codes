// using tabulation-dp (bottom-up)
#include<stdio.h>

int max(int m, int n) {
    return (m > n) ? m : n;
}

char findSeq(int m, int n, int dp[m+1][n+1], char a[], char b[]){

    int i = m, j = n;

    char seq[dp[m][n]];

    int k = dp[m][n] - 1;

    while(i > 0 && j > 0){

        if(a[i-1] == b[j-1]){

            seq[k] = a[i-1];
            i--;
            j--;
            k--;
        }

        else if(dp[i-1][j] > dp[i][j-1]){

            i--;
        }

        else{

            j--;
        }
    }

    printf("Longest common subsequence: ");
    for(int i = 0; i < dp[m][n]; i++){

        printf("%c", seq[i]);
    }

    printf("\n");

}

int lcs (int m, int n, char a[], char b[]){

    int dp[m+1][n+1];

    for(int i = 0; i<=m; i++){

        for(int j=0; j<=n; j++){

            if(i==0 || j==0){

                dp[i][j] = 0;
            }

            else if(a[i-1] == b[j-1]){

                dp[i][j] = 1 + dp[i-1][j-1]; 
            }

            else{

                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    findSeq(m, n, dp, a, b);

    return dp[m][n];
}


int main() {


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

    printf("Length of longest common subsequence: %d\n", lcs(m, n, str1, str2));

}