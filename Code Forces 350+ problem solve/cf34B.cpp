#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int m , n;
    cin >> m >>n;
    int sum =0;
    vector<int>v(m);

    for (int i = 0 ; i < m ;i++)
    {
        cin >>v[i];
    }
     sort(v.begin(),v.end());

     for(int i = 0 ; i < n ; i++)
     {
         if(v[i] < 0){
            sum += abs(v[i]);
         }
     }
     cout << sum;
}
