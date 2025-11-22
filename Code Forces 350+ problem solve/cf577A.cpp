/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int matrix(int n ,int x)
{

    int cnt = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        if(x % i == 0 && x/i <= n)
        {
            cnt++;
        }
    }
    return cnt;
}
int main ()
{
    int n ,x;
    cin >> n >> x;

    cout << matrix(n,x) << endl;
}
