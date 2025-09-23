#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    long s = 0;
    // - Задание номер 4
    int start = 1;
    int finnish = 150;
    cout << " Enter number of columns and rays: (Like: 2 2) ";
    int m, n;
    cin >> m >> n;
    int Diagsum;
    int j[100][100];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            j[i][k] = rand() % (finnish - start + 1) + start;
            // - Задание номер 5
            s += j[i][k];
            cout << j[i][k] << endl;
        }
        cout << endl;
    }
    // - Задание номер 6
    int Sumsize = (n < m) ? n : m;
    for (int a; a < Sumsize; a++) {
        Diagsum += j[a][a];
    }
    cout << "Your sum of all numbers in matrix: " << s << endl;
    cout << "Sum of diagonal elements: " << Diagsum;
}