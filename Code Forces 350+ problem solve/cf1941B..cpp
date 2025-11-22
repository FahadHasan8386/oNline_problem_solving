///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;
#define int long long
int main ()
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int n;
        cin >> n;

        vector<long long>v(n);

        for(int i = 0 ; i < n ; i++)cin >> v[i];

        while(true)
        {
            int maxvalue = -1, maxindex = -1;

            for(int i = 0 ; i < n ; i++)
            {
                if(v[i] > maxvalue)
                {
                    maxvalue = v[i];
                    maxindex = i;
                }
            }
            if(maxvalue == 0 )break;

            v[maxindex] -= 2;

            if (maxindex > 0)
            {
                v[maxindex - 1] = max(0, v[maxindex - 1] - 1);
            }
            if (maxindex < n - 1)
            {
                v[maxindex + 1] = max(0, v[maxindex + 1] - 1);
            }
        }


        int flag = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(v[i] != 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}
