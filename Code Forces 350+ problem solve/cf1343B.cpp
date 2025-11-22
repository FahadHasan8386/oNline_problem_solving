#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        int number;
        cin >> number;
        int sumEven = 0, sumOdd = 0;

        if((number / 2) % 2 != 0)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;

            for(int i = 2; i <= number; i += 2)
            {
                cout << i << " ";
                sumEven += i;
            }

            for(int i = 1; i < number - 1; i += 2)
            {
                cout << i << " ";
                sumOdd += i;
            }

            cout << sumEven - sumOdd << endl;
        }
    }
}
