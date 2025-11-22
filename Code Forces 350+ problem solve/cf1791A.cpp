#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string name = "codeforces";
    char cr ;
    int num ;
    cin >> num;
    int num1 = name.size();
    while(num--)
    {
        cin >> cr;
        bool found = false;
        for (int i = 0 ; i < num1 ; i++)
        {
            if (cr == name[i])
            {
                cout << "YES" << endl;
                found = true;
                break;

            }

        }
        if(!found)
        {
            cout << "NO" << endl;
        }
    }

}
