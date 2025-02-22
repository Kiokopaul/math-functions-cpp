#include <iostream>
#include <vector>
using namespace std;

// Recursive Fibonacci Function
long long fibonacciRecursive(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative Fibonacci Function (Optimized)
long long fibonacciIterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    long long a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n = 10; // Change this number to test other values
    cout << "Fibonacci(" << n << ") (Recursive): " << fibonacciRecursive(n) << endl;
    cout << "Fibonacci(" << n << ") (Iterative): " << fibonacciIterative(n) << endl;
    return 0;
}
