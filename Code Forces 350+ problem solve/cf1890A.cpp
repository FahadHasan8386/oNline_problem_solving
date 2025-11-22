///In the name of Allah

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if (mp.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else if (mp.size() > 3)
        {

            cout << "No" << endl;
        }
        else
        {

            vector<int> vec1;
            for (auto u : mp)
            {
                vec1.push_back(u.second);
            }
            sort(vec1.begin(), vec1.end());
            int dif = abs(vec1[0] - vec1[1]);


            if (vec1.size() == 2 && dif <= 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
