#include <iostream>
#include <tuple>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "Write the number of students: " << endl;
    int n; //Ввод колличества людей
    cin >> n;
    vector<tuple<string, string, double, double, double>> friends_data;

    double total1 = 0, total2 = 0, total3 = 0;

    for (int i = 0; i < n; i++) {
        string surname ,name;
        double score1 , score2 , score3;
        cin >> surname >> name >> score1 >> score2 >> score3;

        friends_data.push_back({name, surname, score1, score2, score3});

        total1 += score1;
        total2 += score2;
        total3 += score3;
    }

    cout << fixed << setprecision(2); // Настаривает формат вывода чисел с плаваущей точкой
    cout << "Average of each scores: " << endl << total1 / n << " " << "\n" << total2 / n << " " << "\n" << total3 / n << endl;

    return 0;
}
