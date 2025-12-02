#include <iostream>
#include <vector>

using namespace std;

void find_partitions_recursive(int target, int max_val, vector<int>& current_partition, int original_n) {
    if (target == 0) {
        cout << original_n << " = ";
        for (size_t i = 0; i < current_partition.size(); ++i) {
            cout << current_partition[i] << (i == current_partition.size() - 1 ? "" : " + ");
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= target && i <= max_val; ++i) {
        current_partition.push_back(i);
        find_partitions_recursive(target - i, i, current_partition, original_n);

        current_partition.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter the number to partition: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "\nAll Partitions of " << n << ":\n";
    vector<int> current_partition;

    find_partitions_recursive(n, n, current_partition, n);

    return 0;
}