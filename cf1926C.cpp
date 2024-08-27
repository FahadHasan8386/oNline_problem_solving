///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int sumOfdigit(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main ()
{
    vector<int>digitSum(200001, 0);

    for(int i = 1 ; i <= 200000 ;++i)
    {
        digitSum[i] = digitSum[i-1] +sumOfdigit(i);
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << digitSum[n] <<endl;
    }
return 0;
}
