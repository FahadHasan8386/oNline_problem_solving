#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int count = 0;
    int sz ;
        cin >> sz;
    int num[sz];
    for (int i = 0 ; i < sz ;i++)
    {
        cin >> num[i];
    }
    int max = num[0];
    int min = num[0];
    for (int i = 0 ; i < sz ;i++){
        if (num[i] > max ){
            max = num[i];
            count++;
        }
        if (num[i] < min){
            min = num[i];
            count++;
        }
    }
    cout << count;
}
