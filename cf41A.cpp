#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , s1 ,rev;
        cin >> s >> s1;
    rev = s;
    reverse(rev.begin(),rev.end());

    if (rev == s1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

