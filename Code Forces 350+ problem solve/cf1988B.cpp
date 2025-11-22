#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '0' && s[i - 1] == '0')
            {
                s.erase(i, 1);
                i--;
            }
        }
        int cnt0 = 0 , cnt1 = 0;
        for(int i = 0 ; i < s.size();i++)
        {
            if(s[i] == '1')
            {
                cnt1++;
            }
            else{
                cnt0++;
            }

        }
        if(cnt1 > cnt0)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
