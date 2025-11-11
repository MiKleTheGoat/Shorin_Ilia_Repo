#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> names = {"Иванов", "Петров", "Сидоров", "Алексеев", "Борисов", "Анастасия"};
    names.sort();

    names.remove_if([](const std::string& name) {
        return !name.empty() && name.front() == 'А';
    });

    for (string name : names) {
        cout << name << endl;
    }
}
