#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

bool check_breckets(const vector<char>& brackets) {
    stack<char> s;
    map<char, char> pairs = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    for (char c : brackets) {
        if (pairs.find(c) != pairs.end()) {
            s.push(c);
        }
        else {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            if (pairs[top] == c) {
                s.pop();
            }
            else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    int c;
    cin >> c;
    vector<char> bracks(c);
    for (char i: bracks) {
        cin >> i;
    }
    if (check_breckets(bracks)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}