#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Rows and columns must be positive.\n";
        return 1;
    }
    vector<vector<int>> matrix(n, vector<int>(m));
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    cout << "Your matrix in triangle way:\n";
    for (int i = 0; i < n; ++i) {
        int elements = (i + 1 <= m) ? (i + 1) : m;
        for (int j = 0; j < elements; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}