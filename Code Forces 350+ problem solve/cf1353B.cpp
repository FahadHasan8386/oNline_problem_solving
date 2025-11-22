#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
       vector<int>v1(n);
       vector<int>v2(n);
       for(int i=0;i<n;i++)
       {
           cin>>v1[i];
       }
       for(int i=0;i<n;i++)
       {
            cin>>v2[i];
       }
      sort(v1.begin(),v1.end());
      sort(v2.rbegin(),v2.rend());
      for(int i=0;i<k;i++)
       {
          if(v2[i]>v1[i])
          {
              swap(v2[i],v1[i]);
          }
       }
       int sum=0;
        for(int i=0;i<n;i++)
       {
            sum+=v1[i];
       }
       cout<<sum<<endl;
    }
}
