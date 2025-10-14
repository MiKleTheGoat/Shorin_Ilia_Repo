#include <iostream>
#include <string>
using namespace std;

int coutchars(const string &s) {
    int count = 0;
    for (char c : s) {
        count++;
    }
    return count;
}
int main() {
    setlocale(LC_ALL, "Rus");
    string s = "Доброго дня";
    cout << "Length of array: " << coutchars(s) << endl;
}