///In the name  of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,m;
    cin >> n >> m;

    vector<pair<int,int>> p(m);

    for(int i = 0 ; i < m ;i++)
    {
        int x , y;
        cin >> x >> y;

        p[i].first = x;
        p[i].second = y;
    }
    int cnt = 0;
    for(int i = 0 ; i < m-1 ;i++)
    {
        if(p[i].first == p[i+1].first ||p[i].first == p[i+1].second ||p[i].second == p[i+1].first ||p[i].second == p[i+1].second )
        {
            cnt++;
        }
    }
    if(cnt-1 == p.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
