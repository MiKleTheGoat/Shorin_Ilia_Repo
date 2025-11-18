#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> alphabets;  // Вектор для букв, которые есть во всех повторяющихся словах
    set<string> all_words;     // Слова, которые повторяются
    unordered_set<string> unduplicated_words; // Все уникальные слова
    string word;

    while (cin >> word) {
        if (unduplicated_words.find(word) != unduplicated_words.end()) {
            all_words.insert(word);
        }
        else {
            unduplicated_words.insert(word);
        }
    }

    if (all_words.empty()) {
        cout << "Нет повторяющихся слов." << endl;
        return 0;
    }

    unordered_set<char> common_chars(all_words.begin()->begin(), all_words.begin()->end());

    for (auto it = next(all_words.begin()); it != all_words.end(); ++it) {
        const string& current_word = *it;
        unordered_set<char> current_chars(current_word.begin(), current_word.end());

        unordered_set<char> new_common;
        for (char c : common_chars) {
            if (current_chars.count(c)) {
                new_common.insert(c);
            }
        }
        common_chars = move(new_common);
    }
    for (char c : common_chars) {
        alphabets.push_back(string(1, c));
    }

    if (alphabets.empty()) {
        cout << "Нет общих букв во всех повторяющихся словах." << endl;
    } else {
        cout << "Общие буквы: ";
        for (const auto& c : alphabets) {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}