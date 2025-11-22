///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a = n -1;
        int b = n - a;
        int re = max(b,a);

        cout << re << endl;

    }
}
