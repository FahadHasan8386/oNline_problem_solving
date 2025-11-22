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

int main()
{
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        int digit = str[i] - '0';
        int inverted = 9 - digit;
        if(i == 0 && digit == 9)
        {
            cout << 9;
        }
        else
        {
            cout << min(digit, inverted);
        }
    }
    cout << endl;
}
