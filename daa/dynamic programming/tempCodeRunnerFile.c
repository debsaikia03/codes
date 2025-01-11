// using tabulation-dp (bottom-up)
#include<stdio.h>

int max(int m, int n) {
    return (m > n) ? m : n;
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