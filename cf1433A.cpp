#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int firstDigit = s[0] - '0';
        int length = s.size();

        int result = (firstDigit - 1) * 10 + (length * (length + 1)) / 2;
        cout << result << endl;
    }
}
