#include <bits/stdc++.h>
using namespace std;

void solve(long long arr[], int n, int q,long long pref[])
{

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    pref[0] = 0;

    for(int i = 1; i < n+1; i++)
    {
        pref[i] = pref[i-1]+ arr[i];
    }
    while(q--)
    {
        int a, b;
        cin >> a >> b;

        cout << pref[b] - pref[a-1] << endl;
    }
}

int main()
{
    int n, q;
    cin >> n >> q;


    long long arr[n];
    long long pref[n+1];

    solve(arr, n, q, pref);

    return 0;
}
