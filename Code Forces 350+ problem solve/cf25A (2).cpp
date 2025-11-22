///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n;
    cin >> n;

    vector<int>v(n);
    int evencnt = 0 , oddcnt = 0 , evenIndex = -1 , oddindex = -1;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        if(v[i] % 2 == 0)
        {
            evencnt++;
            evenIndex = i+1;
        }
        else
        {
            oddcnt++;
            oddindex = i+1;
        }
    }

    if(evencnt == 1)
    {
        cout << evenIndex << endl;
    }
    else
    {
        cout << oddindex << endl;
    }
}
