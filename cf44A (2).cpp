#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    vector<pair<string ,string>> s(t);

    for(int i =0 ; i < t ;i++)
    {
        cin >> s[i].first >> s[i].second;
    }


    sort(s.begin() ,s.end());

    int sz = unique (s.begin() ,s.end()) - s.begin();

    cout << sz << endl;
}
