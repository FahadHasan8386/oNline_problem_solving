#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
        cin>>s;
        int sum;
        for(int i=0;i<1;i++)
        {
            sum=(s[i]-'0')+(s[i+1]-'0');
        }
        cout<<sum<<endl;
    }

}
