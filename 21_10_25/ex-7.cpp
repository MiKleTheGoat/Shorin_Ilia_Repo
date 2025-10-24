#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

void printMatrix(const vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter the number of colums and rows: ";
    cin >> m >> n;
    vector<int> min_numbers;
    vector<vector<int>> matrix(m, vector<int>(n));
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    printMatrix(matrix);

    for (int i = 0; i < matrix.size(); i++) {
        int min_val = matrix[0][i];
        for (int j = 1; j < matrix[i].size(); j++) {
            if (matrix[j][i] < min_val) {
                min_val = matrix[j][i];
            }
        }
        min_numbers.push_back(min_val);
    }

    cout << "Your minimum numbers are: ";
    for (int number : min_numbers) {
        cout << number << " ";
    }
}
