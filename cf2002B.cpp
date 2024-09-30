/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);


        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }


        if(n % 2 == 0)
        {
            a.erase(a.begin());
            b.erase(b.begin());
        }
        else
        {
            a.pop_back();
            b.pop_back();
        }

        if(a.size() > 0 && a.back() == b.back())
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
