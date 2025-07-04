#include <bits/stdc++.h>>
using  namespace std ;

void fahad()
{
    int n;
    cin >> n;
    vector<int>v(n);
    vector<int>v1(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
    }

    for(int i = 0 ; i < n ;i++)
    {
        cin >> v1[i];
    }
    int l = 0 , r = n-1;
    while(l < n && v[l] == v1[l])l++;
    while(r >= 0 && v[r] == v1[r])r--;


    while(l > 0 && v1[l-1] <= v1[l])l--;
    while(r+1 < n && v1[r] <= v1[r+1])r++;


    cout << l+1 <<" " << r+1 << endl;


}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
