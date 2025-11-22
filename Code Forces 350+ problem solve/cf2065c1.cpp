///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n , m;
    cin >> n >> m;

     vector<long long> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    long long B = b[0];
    long long prev = -1e18;

     for (int i = 0; i < n; i++) {
        long long keep = a[i];

        long long change = B - a[i];
        long long choice = 1e18;

        if (keep >= prev) choice = min(choice, keep);


        if (change >= prev) choice = min(choice, change);


        if (choice == 1e18) {
            cout << "NO" << endl;
            return;
        }

        prev = choice;
    }
cout << "YES" << endl;

}

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
