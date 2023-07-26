#include <iostream>
#include <cmath>

double calculateSeriesSum(double x, int n) {
    double sum = 0.0;
    double term = x;
    double factorial = 1.0;

    for (int i = 1; i <= n; i += 2) {
        sum += term / factorial;

        term *= x * x;           // Calculate the next term (x^(i+2))
        factorial *= (i + 1) * (i + 2);  // Calculate the next factorial ((i+2)!)
    }

    return sum;
}

int main() {
    double x;
    int n;

    std::cout << "Enter X: ";
    std::cin >> x;

    std::cout << "Enter the range of number: ";
    std::cin >> n;

    double sum = calculateSeriesSum(x, n);

    std::cout << "The sum of the series = " << sum << std::endl;

    return 0;
}
