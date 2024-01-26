#include <iostream>
using namespace std;

void io(int** arr, int rows, int cols) {
    cout << "Enter elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void output(int** arr, int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int Sum(int** arr, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

void RowSum(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int rsum = 0;
        for (int j = 0; j < cols; j++) {
            rsum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " is: " << rsum << endl;
    }
}

void ColSum(int** arr, int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        int csum = 0;
        for (int j = 0; j < rows; j++) {
            csum += arr[j][i];
        }
        cout << "Sum of column " << i + 1 << " is: " << csum << endl;
    }
}

void transpose(int** arr, int rows, int cols) {
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows : ";
   
    cin >> rows;
     
    cout << "Enter Number of Columns:";
    cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    io(arr, rows, cols);
    output(arr, rows, cols);

    int sum = Sum(arr, rows, cols);
    cout << "Sum of all elements: " << sum << endl;

    RowSum(arr, rows, cols);
    ColSum(arr, rows, cols);

    transpose(arr, rows, cols);

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
