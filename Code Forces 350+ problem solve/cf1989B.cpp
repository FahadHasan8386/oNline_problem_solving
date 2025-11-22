#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    string s;
    cin >> s;

    string s1;
    cin >> s1;

    int n = s.size() , m = s1.size();
    int ans = n + m ;//Worstcase

    for(int i = 0 ; i < m;i++)
    {
        int j = i;
        for(char c : s)
        {
            if(j < m && c == s1[j])j++;
        }
        ans = min (ans, n+m - (j-i));
    }
    cout << ans  << endl;
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
