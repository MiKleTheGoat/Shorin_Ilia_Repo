#include <iostream>
#include <vector>
// ___________________________Exercise No.1___________________________
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows: ";
    cin >> N;
    double* ptr = new double(N);
    double** ptr_to_ptr = &ptr;

    cout << **ptr_to_ptr << endl;

    delete ptr;

    // ___________________________Exercise No.2___________________________

    int n;
    cout << "Enter length of numbers of array: ";
    cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        double tp = arr[i];
        arr[i] = arr[j];
        arr[j] = tp;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout << arr[i] << endl;
    }
    cout << sum << endl;

    delete[] arr;
}