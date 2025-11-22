//In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 1)
            {
                v[i] += 1;
            }
        }


        for(int i = 1; i < n; i++)
        {
            if(v[i] % v[i-1] == 0)
            {
                v[i]++;
            }
        }

        for(auto u : v)
        {
            cout << u << " ";
        }
        cout << endl;
    }

    return 0;
}
