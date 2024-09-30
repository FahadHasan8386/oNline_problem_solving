/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    map<string, int> mp;


    for (int i = 0; i < n - 1; i++) {
        string s1 = s.substr(i, 2);
        mp[s1]++;
    }

    string most_frequent;
    int max_count = 0;


    for (auto it : mp) {
        if (it.second > max_count) {
            most_frequent = it.first;
            max_count = it.second;
        }
    }

    cout << most_frequent << endl;

    return 0;
}
