#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void Duplicate(vector<T>& v) {
    v.resize(v.size() * 2);
    copy(v.begin(), v.end(), v.begin() + (v.size() / 2));
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    Duplicate(v);
    for (int num : v) {
        cout << num << " ";
    }
}