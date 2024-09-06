///In the name of Allah

#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n ;
        int k ;
        cin >> k;

        string s;
        cin >> s;

       map<char ,int>mp;
       for(int i = 0 ; i < n ;i++)
       {
           mp[s[i]]++;
       }
       int cnt = 0;
       for(auto it : mp)
       {
           if(it.second % 2 != 0)
           {
               cnt++;
           }
       }
       if(cnt -1 < 0)
       {
           cnt = 0;
       }else{
            cnt = cnt -1;
       }

       if(k >= cnt && k <= n)
       {
           cout << "YES\n";
       }
       else{
        cout << "NO\n";
       }
    }
}
