///IN the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;
    vector<int>v1(t);
    vector<int>v2(t-1);
    vector<int>v3(t-2);

    for(int i = 0 ; i < t;i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin() ,v1.end());
    //v2
    for(int i = 0 ; i < t-1;i++)
    {
        cin >> v2[i];
    }
    sort(v2.begin() ,v2.end());
    //v3
    for(int i = 0 ; i < t-2;i++)
    {
        cin >> v3[i];
    }
    sort(v3.begin() ,v3.end());

    for(int i = 0 ; i < t ;i++)
    {
        if(v1[i] != v2[i])
        {
            cout << v1[i] <<endl;
            break;
        }
    }

    for(int i = 0 ; i < t-1 ;i++)
    {
        if(v2[i] != v3[i])
        {
            cout << v2[i] <<endl;
            break;
        }
    }

}
