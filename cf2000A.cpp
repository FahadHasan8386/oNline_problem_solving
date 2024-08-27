#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if((n > 1009 && n <= 1099 ) || (n >= 102 && n <= 109))
        {
            cout <<"YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }

    }
}
