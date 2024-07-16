#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n ;
        cin >> n;
        long long sum =  1;
        for(int i = 1 ; i <= 30 ;++i)
        {
            sum += pow(2,i);
            if(n % sum == 0 )
            {
                cout << n / sum << endl;
                break;
            }
        }
    }
}
