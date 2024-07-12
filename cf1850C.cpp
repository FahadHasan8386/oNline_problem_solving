#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string m;
        for (int i = 0; i < 8; ++i)
        {
            string s;
            cin >> s;

            for (char c : s)
            {
                if (c != '.')
                {
                    m += c;
                }
            }
        }
        cout << m << endl;
        m.clear();
    }
    return 0;
}
