#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n;
        string s;
        cin >> s;


        if(s[0] == '1' || s[0] == '1' && s[n] == '1')
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }



    }
}
