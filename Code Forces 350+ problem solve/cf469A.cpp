#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n ;
    cin >> n ;

    int x ;
    cin >> x;

    set<int> levels;
    int level;

    for(int i = 0 ; i < x ; i++)
    {
        cin >> level;
        levels.insert(level);
    }

    int y ;
    cin >> y ;

    for (int i = 0 ; i < y ; i++)
    {
        cin >> level;
        levels.insert(level);
    }

    bool result = true;

    for (int i = 1 ;i <= n; i++)
    {
        if(levels.find(i) == levels.end() )
        {
            result = false;
            break;
        }
    }

    if(result)
    {
        cout << "I become the guy." <<endl;
    }
    else {
        cout << "Oh, my keyboard! " <<endl;
    }
}
