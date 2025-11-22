#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int num = s.length();
    int i = 0;

    while(i < num)
    {
        if(s[i] == '.')
        {
            cout << "0";
            i++;
        }
        else if (s[i] == '-' && i+1 < num && s[i+1] == '.')
        {
            cout << "1";
            i += 2;
        }
        else if (s[i] == '-' && i+1 < num && s[i+1] == '-')
        {
            cout << "2";
            i += 2;
        }
        else {
            i++;
        }
    }
    return 0;
}
