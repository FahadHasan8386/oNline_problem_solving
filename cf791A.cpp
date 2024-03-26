#include <bits/stdc++.h>
using namespace std ;

int main (){

    int n1 , n2 ;

        cin >> n1 >> n2;
    int i;
    for (i = 1 ;; i++){
        n1 *= 3;
        n2 *= 2;
        if(n1 > n2){
            break;
        }
    }
    cout << i;

    return 0;
}
