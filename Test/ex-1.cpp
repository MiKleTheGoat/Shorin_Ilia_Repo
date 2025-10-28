//Group: INBO-31-25
//Student: Shorin Ilia

#include <iostream>
#include <vector>
using namespace std;

bool isArithmeticProgression(const std::vector<int>& arr) {
    if (arr.size() <= 2) {
        return true;
    }
    int d = arr[1] - arr[0];
    for (size_t i = 2; i < arr.size(); ++i) {
        if (arr[i] - arr[i - 1] != d) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (isArithmeticProgression(arr)) {
        cout << "ArithmeticProgression is true" << endl;
    } else {
        cout << "ArithmeticProgression is false" << endl;
    }

    return 0;
}