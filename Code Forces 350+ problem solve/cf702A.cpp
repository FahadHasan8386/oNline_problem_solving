#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int num;
    cin >> num;

    vector<int>arr(num);


    for (int i = 0 ; i < num ; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    int count2 = 1;
    for(int i = 1 ; i < num ;i++)
    {
        if(arr[i] > arr[i-1])
        {
            count++;
        }
        else
        {
            if(count > count2)
            {
                count2 = count;
            }
            count = 1;
        }
    }
    if(count > count2)
    {
        count2 = count ;
    }
    cout << count2 <<endl;
    return 0;
}
