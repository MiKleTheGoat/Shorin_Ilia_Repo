#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> mylist;

    mylist.insert_after(mylist.before_begin(), 5);

    auto it = mylist.begin();
    mylist.insert_after(it, 1);
    mylist.insert_after(it, 2);
    mylist.insert_after(it, 3);
    mylist.insert_after(it, 4);

    for (int c: mylist) {
        cout << c << " ";
    }

}