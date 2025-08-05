///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    int prime_fact_count[3001] = {0};

    for(int i = 2 ; i  <= n; i++)
    {
        if(prime_fact_count[i] == 0)
        {
            for(int j = i; j  <= n; j += i)
            {
                prime_fact_count[j]++;
            }
        }

    }
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (prime_fact_count[i] == 2)
        {
            result++;
        }
    }

    cout << result << endl;

    return 0;

}
