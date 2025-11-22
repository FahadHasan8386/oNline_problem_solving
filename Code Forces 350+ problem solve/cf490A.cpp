#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>one;
    vector<int>two;
    vector<int>three;
    int a=0,b=0,c=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            a++;
            one.push_back(i);
        }
        if(x==2)
        {
            b++;
            two.push_back(i);
        }
        if(x==3)
        {
            c++;
            three.push_back(i);
        }
    }
    int m=min({a,b,c});
    cout<<m<<endl;
    if(m!=0)
    {
        for(int i=0;i<m;i++)
        {
            cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
        }
    }
}
