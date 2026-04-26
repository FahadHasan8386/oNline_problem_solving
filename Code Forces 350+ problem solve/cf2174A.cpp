#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        string s, t;
        cin >> s >> t;

        vector<int> cnt(26, 0);

        for(char c : t) cnt[c - 'a']++;

        bool ok = true;

        for(char c : s) {
            if(cnt[c - 'a'] == 0) ok = false;
            cnt[c - 'a']--;
        }

        if(!ok) {
            cout << "Impossible" << endl;
            continue;
        }

        string smaller = "", equal = "", greater = "";

        char first = s[0];

        for(int i = 0; i < 26; i++) {
            char c = 'a' + i;

            if(c < first)
                smaller += string(cnt[i], c);
            else if(c == first)
                equal += string(cnt[i], c);
            else
                greater += string(cnt[i], c);
        }

        string op1 = smaller + s + equal + greater;
        string op2 = smaller + equal + s + greater;

        cout << min(op1, op2) << endl;
    }
}
