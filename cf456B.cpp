///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int fahad(const string &n)
{
    int pattern_2[] = {2, 4, 3, 1};
    int pattern_3[] = {3, 4, 2, 1};
    int pattern_4[] = {4, 1};

    int last_digit = n.back() - '0';
    int mod4 = last_digit % 4;
    int mod2 = last_digit % 2;

    int result = (1 + pattern_2[mod4] + pattern_3[mod4] + pattern_4[mod2]) % 5;
    return result;
}

int main()
{
    string n;
    cin >> n;
    cout << fahad(n) << endl;
    return 0;
}
