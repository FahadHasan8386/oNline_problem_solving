/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void fahad()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = n + 1;

    for(int i = 0 ; i < 26 ; i++)
    {
        int l = 0, r = n - 1,cnt = 0;

        char c = char('a' + i);
        while(l < r)
        {
            if(s[l] == s[r])
            {
                //cnt++;
                l++;
                r--;
            }
            else if(s[l] == c)
            {
                cnt++;
                l++;
            }
            else if(s[r] == c)
            {
                cnt++;
                r--;
            }
            else
            {

                cnt = n+1;
                break;
            }
        }
        ans = min (ans,cnt);
    }
    if(ans == n+1 )ans = -1;
    cout << ans << endl;
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
