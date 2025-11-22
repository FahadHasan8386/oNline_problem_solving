#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n ;
        cin >> n;
    int num [n][3];
    for (int i = 0 ; i < n ;i++){
        for (int j = 0 ; j < 3 ;j++){
            cin >> num[i][j];

        }

    }
    int colSum[3] = {0};
    for (int j = 0 ; j < 3 ;j++){
        for (int i = 0 ; i < n ;i++){
            colSum[j] += num[i][j];
        }
    }
    bool zero = true;
    for(int j = 0 ; j < 3 ; j++)
    {
        if(colSum[j] != 0){
            zero = false;
        break;
        }
    }
    if(zero){
            cout << "YES";
        }
        else {
            cout << "NO";
        }
}
