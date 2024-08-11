#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> arr(n);

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        int q = arr[0] * n;

        cout << sum - q << endl;
    }
}
