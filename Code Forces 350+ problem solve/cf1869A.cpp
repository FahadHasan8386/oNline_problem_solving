//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> vi(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vi[i];
        }
        if(vi[0] == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
