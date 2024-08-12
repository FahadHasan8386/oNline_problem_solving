#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int countBy2 = n / 2;
        int countBy4 = n / 4;

        int result = countBy2 - countBy4;
        cout << result << endl;
    }

    return 0;
}
