#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int p;
        cin >> p;

    int arr[p];

    for (int i = 0 ; i < p ; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1 ; j <= p ; j++)
        {
            for (int i = 0 ;i < p ;i++)
            {
                if(arr[i] == j)
                    {
                        cout << i + 1 << " ";
                    }
            }
        }

}
