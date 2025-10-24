#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

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
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    vector<vector<int>>matrix(m, vector<int>(n));

    srand(time(NULL));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    printMatrix(matrix);

    for (int i = 0; i < matrix.size(); i++) {
        int sum;
        for (int j = 0; j < matrix[i].size(); j++) {
            sum += matrix[i][j];
        }
        cout << "Your sum is: " << sum << " " << endl;
    }
}