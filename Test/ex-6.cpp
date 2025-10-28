//Group: INBO-31-25
//Student: Shorin Ilia
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string Amount_OF_Elements(const string& s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        count++;
    }
    return to_string(count);
}

int main() {
    string m;
    cout << "Please enter a string: ";
    getline(cin, m);
    cout << "Amount of elements in string: " <<Amount_OF_Elements(m) << endl;
}