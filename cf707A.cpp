#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ,m ;
    cin >> n >> m;
    char arr;
    bool isColored = false;

    for (int i = 0 ; i < n ;i++)
    {
        for (int j = 0 ; j < m ;j++)
        {
            cin >> arr;
            if(arr == 'C' || arr == 'M' ||arr == 'Y')
            {
                isColored = true;
            }
        }
    }
    if(isColored)
    {
        cout << "#Color" << endl;
    }
    else {
        cout << "#Black&White" << endl;
    }
    return 0;
}
