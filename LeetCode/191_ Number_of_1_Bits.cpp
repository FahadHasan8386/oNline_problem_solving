#include <bits/stdc++.h>
using namespace std ;

int hammingWeight(int n) {
        string result = "";
        while(n > 0)
        {
            if(n % 2 == 1)
                result += '1';
            else
                result += '0';

            n /= 2;
        }
        return count(result.begin(), result.end(), '1');
}
int main ()
{
    int n;
    cin >> n ;

    cout << hammingWeight(n) << endl;
}
