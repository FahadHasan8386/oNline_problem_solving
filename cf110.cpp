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
        }
    }
        if (cnt == 4 || cnt == 7){
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

}
