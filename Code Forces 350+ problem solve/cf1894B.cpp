/// IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        map<int, int> mp;
        for (auto it : v)
        {
            mp[it]++;
        }

        vector<int> s;
        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                s.push_back(it.first);
            }
        }

        if (s.size() < 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> b;
        for (auto it : v)
        {
            if (it == s[0])
            {
                b.push_back(2); // Assign 2 for the first duplicate
                mp[it]--;
            }
            else if (it == s[1])
            {
                b.push_back(3); // Assign 3 for the second duplicate
                mp[it]--;
            }
            else
            {
                b.push_back(1); // Default value
            }
        }

        for (auto it : b)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
