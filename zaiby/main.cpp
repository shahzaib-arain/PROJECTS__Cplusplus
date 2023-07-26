#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("C:/path/to/numbers.txt");;
    if (!inputFile) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    std::ofstream outputFile("res.txt");
    if (!outputFile) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    int number1, number2;
    while (inputFile >> number1 >> number2) {
        int sum = number1 + number2;
        outputFile << number1 << " + " << number2 << " = " << sum << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Addition completed. Check 'result.txt' for the output." << std::endl;

    return 0;
}
