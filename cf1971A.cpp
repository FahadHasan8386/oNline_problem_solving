#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int> v(2);

        for(int i = 0; i < 2; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());


        for(int i = 0; i < 2; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
