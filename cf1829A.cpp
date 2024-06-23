#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    string s = "codeforces";
    string s1;
    int count = 0;
    while(t--)
    {
        cin >> s1;
        for(int i = 0 ; i < s1.size() ;i++)
        {
            if(s[i] != s1[i])
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}
