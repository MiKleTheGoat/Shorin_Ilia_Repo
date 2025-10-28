//Group: INBO-31-25
////Student:  Shorin Ilia

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    vector<int> arr(n);
    srand(time(nullptr));

    cout << "Enter " << n << " numbers for array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Your array is: ";
    for (int a : arr) {
        cout << a << " ";
    }
    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());
    cout << "Your sorted array is: " << endl;

    for (int c: arr) {
        cout << c << ' ';
    }
}