#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    // Инициализация переменных
    long chet = 0, nechet = 0;
    int start = 1;
    int finnish = 150;
    double s = 0.0;
    double ans = 0.0;
    // Задание номер 1
    cout << "Enter your length of array: ";
    int len;
    cin >> len;
    vector<int> j(len);
    srand(time(0));
    for (int i = 0; i < len; i++) {
        j[i] = rand() % (finnish - start + 1) + start;
        cout << j[i] << endl;
        s += j[i];
    }
    ans = s / len;
    // Задание номер 2
    long min = j[0];
    long max = j[0];
    
    for (int i = 0; i < len; i++) {
        if (j[i] % 2 == 0) {
            chet += 1;
        } else {
            nechet += 1;
        }
        // Задание номер 3
        if (j[i] < min) {
            min = j[i];
        }
        if (j[i] > max) {
            max = j[i];
        }
    }
    
    cout << "Average: " << ans << endl;
    cout << "Even: " << chet << endl;
    cout << "Odd: " << nechet << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    
    return 0;
}