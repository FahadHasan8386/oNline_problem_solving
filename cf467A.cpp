#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
        cin >> t;
    int n1 ,n2 ,n3 ,sub = 0;

    while (t--)
    {
        cin >> n1 >> n2;
        n3 = n2 - n1;
        if(n3 >= 2){
        sub++;
    }
    }
    cout << sub;
}
