///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    long long n;
    cin >> n;

    vector<long long> fact(20);

    fact[0] = 1;

    for(int i = 1 ; i < 20 ;i++)
    {
        fact[i] = fact[i-1] * i;
    }

    long long sum = 0;
    int count = 0;

    if(n < 0)
    {
        cout << "Negative value donot have factorial" << endl;
    }
    else if(n == 0)
    {
        cout << "The Factor is 0 is 1" << endl;
    }
    else
    {
        for(int i = 1; i <= n ;i++)
        {
            factorial *= i;
        }
        cout << "Factor of " << n << " is = " << factorial;
    }

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
