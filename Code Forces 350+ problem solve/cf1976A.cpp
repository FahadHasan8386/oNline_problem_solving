#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    int n;
    cin >> n;

    string s , p;
    cin >> s;

    p = s;

    sort(s.begin(),s.end());

    if (s == p )
    {
        cout <<"YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
}

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}
