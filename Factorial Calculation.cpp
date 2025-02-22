#include <iostream>
using namespace std;

// Recursive Factorial Function
long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative Factorial Function
long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int n = 5; // Change this number to test other values
    cout << "Factorial of " << n << " (Recursive): " << factorialRecursive(n) << endl;
    cout << "Factorial of " << n << " (Iterative): " << factorialIterative(n) << endl;
    return 0;
}
