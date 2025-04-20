///IN the name of Allah
#include <bits/stdc++.h>>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    vector<long long>v(n);
    long long totalSum = 0 , maxTime = 0;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
        totalSum += v[i];
        maxTime = max(maxTime , v[i]);
    }

    cout << max (totalSum , 2 *maxTime)  << endl;
}
