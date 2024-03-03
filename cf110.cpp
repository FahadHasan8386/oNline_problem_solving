#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string number;
        cin >> number;

    int cnt = 0;

    for(char a : number){

        if (a == '4' || a == '7'){

            cnt++;
            if (cnt == number.size()){

                cout << "YES";
                return 0;
            }

        }
    }
    cout << "NO";
}
