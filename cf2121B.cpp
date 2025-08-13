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
    vector<int>cnt(26,0);
    for(char c : s)cnt[c - 'a']++;

    bool match = false;
    for(int i = 0 ; i < 26; i++)
    {
        if(cnt[i] >= 3)
        {
            match = true;
            break;
        }
        if(cnt[i] == 2 && (s[0] - 'a' != i  || s.back() - 'a' != i))
        {
            match = true;
            break;

        }
    }
    if(match)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
