///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

bool palindrome (vector<int>& v ,int start ,int end)
{
    if(start >=  end)
    {
        return true;
    }
    if(v[start] != v[end])
    {
        return false;
    }
    return palindrome(v,start+1 , end-1);
}

int main ()
{
    int n;
    cin >> n;

    vector<int>v(n);

    for(int i  =0 ;i < n ;i++)
    {
        cin >> v[i];
    }
    if(palindrome(v , 0 , n-1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
