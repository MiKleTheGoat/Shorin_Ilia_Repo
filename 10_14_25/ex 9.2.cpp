#include <iostream>
#include <string>
using namespace std;

bool compare(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    for (size_t i; i < s1.length(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "HelLo";
    string s2 = "HELlo";

    if (compare(s1, s2) == 1) {
        cout << "String are completely equal";
    }
    else {
        cout << "String are not equal";
    }
}