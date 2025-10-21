#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
// Exercize No.1
 int main() {
     double overall;
     int count = 0;
     int sum = 0;
     int n;
     cout << "Enter the length of the array: ";
     cin >> n;
     vector<int> arr(n);
     srand(time(nullptr));

     for (int i = 0; i < arr.size(); i++) {
         arr[i] = rand() % 100;
     }
     for (int i = 0; i < arr.size(); i++) {
         sum += arr[i];
     }

     overall = sum /arr.size();

     for (int num : arr) {
         cout << num << " ";
         if (num < overall) {
             count += 1;
         }
    }
    cout << "Overall: " << overall << endl;
    cout << "Amount of elements that less than overall: " << count << endl;
 }