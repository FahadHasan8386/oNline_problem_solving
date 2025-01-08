#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        //map<long long, long long> m;
        long long n;
        long long ans = 0;
        long long cnt = 1;
        cin >> n;
        long long N = n;
        long long sq = sqrt(n);
        for (long long i = 2; i <= sq; i++)
        {
            long long m=0;
            while (n % i == 0)
            {
                n /= i;
                m++;
                if (m> cnt)
                {
                    ans = i;
                    cnt = m;
                }
            }
        }
        cout << cnt << endl;
        for (int i = 1; i < cnt; i++)
        {
            cout << ans << " ";
            N /= ans;
        }
        cout << N << endl;
    }
    return 0;
}
