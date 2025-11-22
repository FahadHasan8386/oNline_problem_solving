#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    int even = 0;
    int odd = 0;
    for(int i = 0 ; i < num ;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ; i < num ;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
        if(even > odd )
        {
            for (int i = 0 ; i < num ;i++)
            {
                if(arr[i] % 2 != 0)
                {
                    cout << i+1;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0 ; i < num ;i++)
            {
                if(arr[i] % 2 == 0)
                {
                    cout << i+1;
                    break;
                }
            }
        }

    }

