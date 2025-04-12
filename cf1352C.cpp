///In the name of Allah
#include<bits/stdc++.h>
using namespace std ;

long long find_kth_non_divisible(long long n, long long k)
{
    long long low = 1, high = 2 * k;
    while (low < high)
    {
        long long mid = (low + high) / 2;
        long long count = mid - mid / n;
        if (count < k)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        cout << find_kth_non_divisible(n, k ) << endl;

    }
}
