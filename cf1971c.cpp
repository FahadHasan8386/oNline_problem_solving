///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

string getorder(int a, int b, int c, int d)
{
    string s = "";

    for (int i = 1; i <= 12; i++) {
        if (i == a || i == b)
            s += "a";
        if (i == c || i == d)
            s += "b";
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        string s = getorder(a, b, c, d);

        if (s == "abab" || s == "baba")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
