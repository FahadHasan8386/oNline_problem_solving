#include <bits/stdc++.h>
using namespace std ;
int main (){
    int a ;
        cin >> a;
    string s;
        cin >> s;
    int b = 0 ;

    for (int i = 0 ; i < a ; i++){
        if (s[i] == s[i + 1]){
            b++;
        }
    }
    cout << b ;

}
