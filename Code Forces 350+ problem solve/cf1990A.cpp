///In the name of Allah

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long cnt1=0,cnt2=0;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for(int i=0; i<n; i++)
        {
            if(n%2==0)
            {
                cnt1+=v[i];
                cnt2+=v[i+1];
                i++;
            }
            else
            {
                cnt1++;
            }
        }
        if(cnt1>cnt2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
