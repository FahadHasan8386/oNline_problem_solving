#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num ;
        cin >> num;

    sort(num.begin(),num.end());

    string sortednum;
    for (int i =0 ; i < num.size() ; i++)
    {
        sortednum += num[i];
        if (i % 2 != 0){
            sortednum += '+';
        }
    }
    cout << sortednum;
}
