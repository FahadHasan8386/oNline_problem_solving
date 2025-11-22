#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;

    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        long last = n % 10;

        long deletedlast = n / 10;
        long sedelete = (deletedlast / 10) * 10 + last;
        cout << max(deletedlast, sedelete);
    }

    return 0;
}
