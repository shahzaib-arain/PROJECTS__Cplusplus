#include <iostream>

void findMinMax(int* arr, int size, int& minValue, int& maxValue) {
    minValue = arr[0];
    maxValue = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }

        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
}

int main() {
    int size;
    std::cout << "Enter the size: ";
    std::cin >> size;

    int* arr = new int[size]; // Dynamically allocate the array

    std::cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int minValue, maxValue;
    findMinMax(arr, size, minValue, maxValue);

    std::cout << "Maximum value: " << maxValue << std::endl;
    std::cout << "Minimum value: " << minValue << std::endl;

    delete[] arr; // Free the dynamically allocated memory

    return 0;
}
