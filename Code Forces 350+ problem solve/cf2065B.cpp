#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }

    if (cnt > 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << s.size() << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        fahad();
    }
}
