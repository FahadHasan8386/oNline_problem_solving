///In the name of ALLah
#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    string s;
    cin >> s;
    int x;
    cin >> x;

    int HH = stoi(s.substr(0,2));
    int MM = stoi(s.substr(3,2));

    int cnt = 0;
    int curH = HH, curM = MM;
    set<pair<int,int>> vis;

    while(!vis.count({curH,curM}))
    {
        vis.insert({curH,curM});

        int revH = (curH % 10) * 10 + (curH /10);
        if(revH == curM) cnt++;

        curM += x;
        curH += curM / 60;
        curM %= 60;
        curH %= 24;
    }

    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
