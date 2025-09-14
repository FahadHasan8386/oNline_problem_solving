/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void fahad() {
    int n;
    cin >> n;

    vector<int>v(n);

    ll sum = 0 , cnt = 0;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
        sum += v[i];
        ///bitwiise odd count
        cnt += (v[i] & 1);///1 dile odd count korbe, 0 dile even

        ///Conditional odd count
        /*if(v[i] % 2 != 0)
        {
            cnt++;
        }
        */
    }
    if(!cnt || cnt == n)
    {
        cout << *max_element(v.begin(),v.end())<< endl;
    }
    else{
        cout << sum - cnt +1 << endl;
    }


}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
