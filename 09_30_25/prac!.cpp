#include <iostream>
using namespace std;

int main() {
    long m, n, t;
    int ans;
    cout << "Ваше уравнение: -7m + 9n - 28t";
    /* 24.  -3(5m-3n)-4(-2m+7т) = -15m + 9n + 8m - 28t
    = -7m + 9n - 28t
     */
    cout << endl << "Введите значение коеффицента m: " << "\n" << "Введите значение коеффицента n: " << "\n" << "Введите значение коеффицента t: ";
    cin  >> m >> n >> t;
    ans = (-7 * m) + (9 * n) - (28 * t);
    cout << "ответ на уравнение : " << ans << endl;
}