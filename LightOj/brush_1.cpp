///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

void fahad(int case_num)
{
    int n ;
    cin >> n;

    int sum = 0;

    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        if(x > 0)
        {
            sum += x;
        }

    }
    cout << "Case " << case_num << ": ";
    cout << sum << endl;
}

int main ()
{
    int tt;
    cin >> tt;

    for(int i = 1 ; i <= tt ; i++)
    {

        fahad(i);
    }
}
