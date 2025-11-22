#include <iostream>
#include <string>
using namespace std;

string abbreviateWord(const string& word) {
    if (word.length() <= 10) {
        return word;
    }
    return word[0] + to_string(word.length() - 2) + word[word.length() - 1];
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline character after reading n

    for (int i = 0; i < n; ++i) {
        string word;
        getline(cin, word);
        cout << abbreviateWord(word) << endl;
    }

    return 0;
}
