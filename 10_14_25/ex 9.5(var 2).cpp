#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void array_primes(int N) {
    for (int i = 2; i <= N; i++) {
        if (IsPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int c;
    cout << "Please enter a number: ";
    cin >> c;
    cout << "Prime numbers: ";
    array_primes(c);
}