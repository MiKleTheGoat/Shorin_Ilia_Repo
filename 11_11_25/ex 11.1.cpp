#include <iostream>
#include <numeric>
#include <iomanip>
using namespace std;
int main() {
    array <int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = accumulate(arr.begin(), arr.end(), 0);
    cout << fixed << setprecision(2);

    cout << (result / arr.size()) << endl;

}