#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers.";
    } else {
        int result = factorial(number);
        std::cout << "The factorial of " << number << " is: " << result;
    }

    return 0;
}
