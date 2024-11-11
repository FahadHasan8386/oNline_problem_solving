///In the name Allah

#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
vector<int>d[mx];
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        long long i;
        for(i = 1;i <= n;i++)
        {
            if(n % i != 0)
            {
                break;
            }
        }
        cout << i - 1 << endl;
    }
}
