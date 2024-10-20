#include <iostream>
#include <cmath>

using namespace std;

// Function to compute factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

// Function to compute the nth prime using Willans' formula
int findNthPrime(int n) {
    double sum = 0.0;

    for (int i = 1; i <= pow(2, n); ++i) {
        double inner_sum = 0.0;

        for (int j = 1; j <= i; ++j) {
            double term = cos((factorial(j - 1) + 1) / (double)j * M_PI);
            inner_sum += term;
        }

        sum += pow(inner_sum, 2);
    }

    int nth_prime = 1 + static_cast<int>(pow(sum, 1.0 / n));
    return nth_prime;
}

int main() {
    int n;

    cout << "Enter the value of n to find the nth prime number: ";
    cin >> n;

    int nth_prime = findNthPrime(n);
    cout << "The " << n << "th prime number is: " << nth_prime << endl;

    return 0;
}
