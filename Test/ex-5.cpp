//Group: INBO-31-25
//Student: Shorin Ilia
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int Func_Funding_elements(const string& s) {
    int count = 0;
    for (char c : s) {
        char lower = tolower(static_cast<unsigned char>(c));
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            count++;
            }
    }
    return count;
}
int main() {
    string m;
    cout << "Please enter a string" << endl;
    getline(cin, m);
    cout << "Amount of Vowels: " << Func_Funding_elements(m) << endl;
}
