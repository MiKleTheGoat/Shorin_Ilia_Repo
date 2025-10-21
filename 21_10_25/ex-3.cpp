#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
// Exercize No.3
int main() {
     int n;
     cout << "Enter number of array: ";
     cin >> n;
    vector<int> arr(n);
     vector<int> answer;
          srand(time(0));

     for (int i = 0; i < arr.size(); i++) {
         arr[i] = rand() % 100;
     }
     int random_index = rand() % n;
     arr[random_index] = (rand() % 25) * 3;

     cout << "Your array before: ";

     for (int nums : arr) {
         cout << nums << " ";
     }
     cout << "Your array after: ";

     for (int j = 0; j < arr.size(); j++) {
         if (arr[j] % 3 == 0) {
             answer.push_back(arr[j]);
         }
     }
     for (int c: answer) {
         cout << c << " ";
     }
}
