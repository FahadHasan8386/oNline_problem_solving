#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x ,y ,a ,b ,c , d ;
        cin >> x >> y >> a >> b;
        c = max(x,y);
        d = min(x,y);
        if(2*a<b)
        {
            cout<< (c*a) + (d*a) << endl;
        }
        else
        {
            cout<< (b*d) + ((c-d)*a) << endl;
        }
    }
}
