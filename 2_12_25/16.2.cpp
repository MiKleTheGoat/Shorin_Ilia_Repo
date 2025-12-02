#include <iostream>
#include <vector>
using namespace std;

void money_needed(vector<int> &money, const int amount) {
    vector<int> temp(amount + 1, amount  + 1);
    temp[0] = 0;
    for (int i = 0; i <= amount; i++) {
        for (int coins : money) {
            if (coins <= i) {
                temp[i] = min(temp[i], temp[i - coins] + 1);
            }
        }
    }
    if (temp[amount] > amount) {
        cout << "Error, cant find right amount of coins for value: " << amount << endl;
    }
    else {
        cout << "Done! Heres your minimal amount of value: " << temp[amount] << endl;
    }
}

int main() {
    int amount, moneys;
    cout << "How much value needed?" << " ";
    cin >> amount;
    cout << "How many type of coins u have?: ";
    cin >> moneys;
    vector<int> money(moneys);
    cout << "Which values of coins do you have? (enter " << moneys << " numbers): ";
    for (int i = 0; i < moneys; ++i) {
        cin >> money[i];
    }
    money_needed(money, amount);

}