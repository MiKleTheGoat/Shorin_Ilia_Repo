#include <iostream>
#include <fstream>
#include <unordered_set>
#include <cctype>
using namespace std;
int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    if (!input.is_open() || !output.is_open()) {
        cerr << "File was not found." << endl;
        return 1;
    }

    string phrase = "user agreement";
    unordered_set<char> to_remove;

    for (char c : phrase) {
        to_remove.insert(tolower(c));
    }

    string line;
    getline(input, line);

    string result;
    for (char c : line) {
        if (to_remove.count(tolower(c)) == 0) {
            result += c;
        }
    }
    for (char c : to_remove) {
        cout << c << " ";
    }
    output << result << endl;
    input.close();
    output.close();

    return 0;
}