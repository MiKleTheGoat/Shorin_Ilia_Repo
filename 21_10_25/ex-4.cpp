#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

// Exercize No.4
int main() {
     int n;
     cout << "Enter number of array: ";
     cin >> n;
     vector<int> sqrt;
     vector<int> arr(n);
     srand(time(NULL));

     cout << "Your array:\n";
     for (int i = 0; i < arr.size(); i++) {
         arr[i] = rand() % 100;
     }

     for (int a: arr) {
         cout << a << " ";
     }
     cout << endl;
     cout << "Your array after:\n";
     for (int i = 0; i < arr.size(); i++) {
         sqrt.push_back(pow(arr[i], 2));
     }
     for (int ans: sqrt) {
         cout << ans << " ";
     }
}
