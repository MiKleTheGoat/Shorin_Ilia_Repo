#include <iostream>
#include <vector>
using namespace std;

vector<int> Prime_vector(int a) {
    vector<bool> prime(a + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= a; i++) {
        if (prime[i]) {
            for (int j = i + i; j <= a; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> res;
    for (int i = 2; i <= a; i++) {
        if (prime[i]) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of prime numbers: ";
    cin >> n;
    vector<int> primes = Prime_vector(n);
    for (int c : primes) {
        cout << c << " ";
    }
}