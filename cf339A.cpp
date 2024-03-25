#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num ;
        cin >> num;

    sort(num.begin(),num.end());

    string sortednum;
    for (auto c : num){

            if(isdigit(c)){

                sortednum += c;
                sortednum += '+';
            }
    }
    sortednum.pop_back();

        cout << sortednum;

    return 0;
}
