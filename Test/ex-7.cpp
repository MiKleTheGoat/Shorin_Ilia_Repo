//Group: INBO-31-25
//Student: Shorin Ilia
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool swapminmax(int* arr, int size) {
    if (arr == nullptr || size == 0) {
        return false;
    }
    int minindex = 0;
    int maxindex = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
        if (arr[i] > arr[maxindex]) {
            maxindex = i;
        }
    }
    swap(arr[minindex], arr[maxindex]);
    return true;
}
int main() {
    int m;
    cout << "Please enter the number of rows: ";
    cin >> m;
    vector<int> arr(m);
    srand(time(0));
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100;
    }
    cout << "Your array is: " << endl;
    for (int a : arr) {
        cout << a << " ";
    }
    cout << endl;
    cout << "Your array after sorting: " << endl;
    if (swapminmax(arr.data(),  arr.size())) {
        for (int x : arr) {
            cout << x << " ";
        }
    }
}