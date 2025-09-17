#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;
// _________________________Exercise No 1._________________________
int main() {
    double x, y;
    int day = 1;
    cout << "Please enter the number of laundering money: ";
    cin >> x;
    cout << "Please enter the number of needed money: ";
    cin >> y;
    while (x <= y) {
        x *= 1.1;
        day += 1;

        if (x > y) {
            cout << "Oops, you got cought by FNS in " << day << " days" << endl;
        }
    }


    //_________________________Exercise No 2._________________________

    int ans;
    int64_t a, b;
    char operation;
    cin >> a >> operation >> b;
    switch (operation) {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        case '%':
            ans = a % b;
            break;
    }
    std::cout << ans << endl;

// _________________________Exercise No 3._________________________
    int64_t A, B;
    cin >> A >> B;
    while (A > B) {
        if (A % 2 == 0) {
            A = A / 2;
            cout << ":2" << endl;
        }
        else {
            A = A - 1;
            cout << "-1" << endl;
        }
        if (A == B) {
            break;
    }
    }
}