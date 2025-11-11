#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> orders;
    orders.push_front("Important Order #1");
    orders.push_front("Important Order #2");
    orders.push_back("Order #1");
    orders.push_back("Order #2");

    cout << "Queue of the orders: " << endl;
    for (const auto& order : orders ) {
        cout << order << endl;
    }
    while (!orders.empty()) {
        cout << "Prosessing the orders: " << orders.front() << std::endl;
        orders.pop_front();
    }

    cout << "\n Orders are empty" << endl;
}