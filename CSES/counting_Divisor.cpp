///IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+12;
int cnt[mx];

int main ()
{

    int lim = 1e6;

    for(int i = 1 ; i <= lim ;i++)
    {
        for(int j = i ;j <= lim ;j+= i)
        {
            cnt[j]++;
        }
    }

    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;
        cout << cnt[x]  << endl;
    }
}
