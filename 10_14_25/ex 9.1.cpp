#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void Cleaning(vector<int> arr) {
    sort(arr.begin(), arr.end());
    auto it = unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
}

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> arr(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10 + 1;
    }
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    Cleaning(arr);

    cout << "After cleaning array: ";
    for (int nums : arr) {
        cout << nums << " ";
    }
}