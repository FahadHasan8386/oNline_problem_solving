///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int l ,r;
        cin >> l >>r;

        int maxluck = 0 , ans = l;

        for(int i = l ; i <= r ;i++ )
        {
            string num = to_string(i);
            sort(num.begin(),num.end());

            int cur = num[num.length()- 1] - num[0];

            if(cur > maxluck)
            {
                maxluck = cur;
                ans = i;
            }
            if(maxluck == 9)
            {
                break;
            }
        }
        cout << ans << endl;
    }
}
