#include <stdio.h>

#define max 1000

int memo[max];

// Function to calculate the Fibonacci number with memoization
int fibb(int n) {
    
    if(n == 1 ) {
        return 0;
    }

    if(n == 2){
        return 1;
    }

    if(memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibb(n-1) + fibb(n-2);

    return memo[n];
}

int main() {
    int a;

    // Initialize memo array
    for(int i = 0; i < max; i++) {
        memo[i] = -1;
    }

    printf("Enter the nth term of the Fibonacci series: ");
    scanf("%d", &a);

    // Check for valid input
    if(a < 1 || a >= max) {
        printf("Please enter a value between 1 and %d\n", max-1);
        return 1;
    }

    printf("The %dth Fibonacci number is: %d\n", a, fibb(a));

    return 0;
}
