#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, set<string>> data;
    for (int i = 0; i < n; i++) {
        string name;
        int page;
        cin >> name >> page;
        data[page].insert(name);
    }
    for (const auto& entrance : data) {
        int page = entrance.first;
        const set<string>& name = entrance.second;

        cout << page;

        for (const string& names : name) {
            cout << " " << names << endl;
        }
    }
}