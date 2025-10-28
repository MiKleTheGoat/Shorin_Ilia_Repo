#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;
    
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    
    cout << "Your matrix is (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < rows; ++i) {
        int evenCount = (cols + 1) / 2;
        for (int k = 0; k < evenCount / 2; ++k) {
            int leftIndex = 2 * k;
            int rightIndex = 2 * (evenCount - 1 - k);
            if (rightIndex < cols) {
                swap(arr[i][leftIndex], arr[i][rightIndex]);
            }
        }
    }
    cout << "\nMatrix after sorting:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}