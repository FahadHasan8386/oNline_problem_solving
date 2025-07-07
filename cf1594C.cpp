/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;


    bool already_ok = true;
    for (auto ch : s)
    {
        if (ch != c)
        {
            already_ok = false;
            break;
        }
    }

    if (already_ok)
    {
        cout << 0 << endl;
        return;
    }


    int answer_x = -1;
    for (int x = 1; x <= n; x++)
    {
        bool ok = true;
        for (int i = x; i <= n; i += x)
        {
            if (s[i - 1] != c)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            answer_x = x;
            break;
        }
    }

    if (answer_x != -1)
    {
        cout << 1 << endl;
        cout << answer_x << endl;
        return;
    }
    else
    {

        cout << 2 << endl;
        cout << n << " " << n - 1 << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        fahad();
    }
}
