#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    string result;

    for(int i = 1 ; i <= n ; ++i)
    {
        if(i % 2 != 0)
        {
            result += "I hate";
        }
        else
        {
            result += "I love" ;
        }
        if(i != n)
        {
            result += " that ";
        }
    }

    result += " it";
    cout << result;
return 0;
}
