// Exercize No.2
int main() {
     int n;
     cout << "Enter the length of the array: ";
     cin >> n;
     vector<int> arr(n);
     srand(time(nullptr));
    cout << "Your array is: ";
     for (int i = 0; i < arr.size(); i++) {
         arr[i] = rand() % 100;
         cout << arr[i]<< " ";
     }
     cout << endl;
     for (int i =  0; i < arr.size(); i++) {
         for (int j = i + 1; j < arr.size(); j++) {
             if (arr[i] > arr[j]) {
                 swap(arr[i], arr[j]);
             }
         }
     }
     cout << "Your swapped numbers are: ";
     for (int num : arr) {
         cout << num << " ";
     }
 }