/// IN the name of Allah
#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ,k;
    cin >> n >> k;

    vector<int>v(n);
    int current_sum = 0;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
    }
    for(int i = 0 ; i < k;i++)
    {
        current_sum += v[i];
    }
    int min_sum = current_sum;
    int min_index = 0;

    for(int i = k ; i < n;i++)
    {
        current_sum = current_sum - v[i-k] + v[i];
        if(current_sum < min_sum)
        {
            min_sum = current_sum;
            min_index = i - k+1;
        }
    }
    cout << min_index +1 << endl;
}
