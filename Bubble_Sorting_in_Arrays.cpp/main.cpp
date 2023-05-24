#include <iostream>
using namespace std;

void bubbleSort2DArray(int array[][100], int numRows, int numColumns)
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns - 1; j++)
        {
            for (int k = 0; k < numColumns - j - 1; k++)
            {
                if (array[i][k] > array[i][k + 1])
                {
                    int temp = array[i][k];
                    array[i][k] = array[i][k + 1];
                    array[i][k + 1] = temp;
                }
            }
        }
    }
}

void print2DArray(const int array[][100], int numRows, int numColumns)
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int temp;
    int numColumns, numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numColumns;

    int array[100][100];
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++)
        {
            cout << "Enter number: ";
            cin >> array[i][j];
        }
    }

    bubbleSort2DArray(array, numRows, numColumns);

    cout << "Sorted Array" << endl;
    print2DArray(array, numRows, numColumns);

    return 0;
}
