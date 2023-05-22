#include <iostream>

using namespace std;

int main()
{
    int size, add = 0;
    cout << "Enter the size: ";
    cin >> size;

    int* arr = new int[size]; // Dynamically allocate the array

    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    char operation;
    cout << "Enter the operation (+, -, average = a): ";
    cin >> operation;

    switch (operation)
    {
        case '+':
            for (int i = 0; i < size; i++)
            {
                add += arr[i];
            }
            cout << "The addition of the numbers is: " << add;
            break;

        case '-':
            add = arr[0];
            for (int i = 1; i < size; i++)
            {
                add -= arr[i];
            }
            cout << "The subtraction of the numbers is: " << add;
            break;

        case 'a':
            for (int i = 0; i < size; i++)
            {
                add += arr[i];
            }
            cout << "The average of the numbers is: " << add / size;
            break;

        default:
            cout << "Invalid operation";
            break;
    }

    delete[] arr; // Free the dynamically allocated memory

    return 0;
}
