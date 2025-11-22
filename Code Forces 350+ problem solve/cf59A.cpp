#include <bits/stdc++.h>
using namespace std ;

int main (){

    string s ;
        cin >> s;

    int upcount = 0;
    int lowcount = 0;

    for (auto c : s){

        if (isupper(c)){
            upcount++;
        }
        else if(islower(c)){
            lowcount++;
        }

    }
    if(upcount > lowcount){
        for (char &c : s ){
            c = toupper(c);
        }
    }
    else{
        for (char &c : s ){
            c = tolower(c);
        }
    }
    cout << s << endl;
}
