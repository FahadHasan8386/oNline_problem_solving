#include <bits/stdc++.h>
using namespace std;

int removeZero(int num)
{
    int result = 0;
    int place = 1;

    while(num > 0)
    {
        int digit = num % 10;
        if(digit != 0)
        {
            result += digit * place;
            place *= 10;
        }
        num /= 10;
    }
    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int sum = a + b;

    int aClean = removeZero(a);
    int bClean = removeZero(b);
    int sumClean = removeZero(sum);

    if(aClean + bClean == sumClean)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
