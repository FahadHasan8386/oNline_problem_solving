#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n;
    cin >> n;

    vector<int> a;
    a.reserve(n);


    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(a.empty() || x != a.back())
        {
            a.push_back(x);
        }
    }

    int valley = 0;

    for(int i = 0; i < (int)a.size(); i++)
    {
        bool left_ok  = (i == 0 || a[i-1] > a[i]);
        bool right_ok = (i == (int)a.size()-1 || a[i] < a[i+1]);

        if(left_ok && right_ok)
        {
            valley++;
        }
    }

    if(valley == 1) cout << "YES\n";
    else            cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
