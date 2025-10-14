#include <iostream>
using namespace std;

double rec(double a, int n) {
    if (n == 0) return 1.0;

    if (n == -1) return 1/a;

    if (n == 1) return a;

    if (n < 0) return 1/(a * rec(a, -n));

    if (n > 0) return a * rec(a, n - 1);

}

int main() {
    int c;
    double x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> c;
    cout << "The number powered by exponent: " << rec(x, c) << endl;
}