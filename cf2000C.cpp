/// In the name of Allah

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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if (n != s.size())
            {
                cout << "NO" << endl;
                continue;
            }

            // First Condition
            map<char, vector<int>> mp;
            for (int i = 0; i < n; i++)
            {
                mp[s[i]].push_back(i);
            }
            bool ok = true;
            for (auto it : mp)
            {
                for (int k = 0; k < it.second.size() - 1; k++)
                {
                    if (v[it.second[k]] != v[it.second[k + 1]])
                    {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (!ok)
            {
                cout << "NO" << endl;
                continue;
            }

            // Second Condition
            map<int, vector<int>> mp2; // Use int as the key
            for (int i = 0; i < n; i++)
            {
                mp2[v[i]].push_back(i);
            }
            ok = true;
            for (auto it : mp2)
            {
                for (int k = 0; k < it.second.size() - 1; k++)
                {
                    if (s[it.second[k]] != s[it.second[k + 1]])
                    {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (!ok)
            {
                cout << "NO" << endl;
                continue;
            }

            // If all conditions pass
            cout << "YES" << endl;
        }
    }
    return 0;
}
