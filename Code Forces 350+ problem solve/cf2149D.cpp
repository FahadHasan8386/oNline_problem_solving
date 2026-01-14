#include <bits/stdc++.h>
using namespace std;

long  long costToGroup(const string& s ,char c)
{
    vector<long long>v;

    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == c) v.push_back(i);
    }

    int k = v.size();
    if(k <= 1)return 0;

    vector<long long>d(k);

    for(int i = 0 ; i < k ;i++)
    {
        d[i] = v[i] -i;
    }

    long long median = d[k / 2];
    long long cost = 0;
    for (long long x : d) {
        cost += llabs(x - median);
    }
    return cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long ans = min(
            costToGroup(s, 'a'),
            costToGroup(s, 'b')
        );

        cout << ans << endl;
    }
    return 0;
}
