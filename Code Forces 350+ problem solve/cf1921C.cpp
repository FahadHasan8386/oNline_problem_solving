///In the name of Allah
#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n , f, a ,b;
        cin >> n >> f >> a >> b;

        vector<long long>v(n+1);

        for(int i = 1 ; i <= n ;i++)
        {
            cin >> v[i];
        }
        for(int i = 1 ; i <= n ;i ++)
        {
            long long x = min ((v[i] - v[i-1]) * a , b);
            f  -=x;
        }
        if(f > 0)
        {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}
