#include<bits/stdc++.h>
using namespace std;

int main (){
    string num1 ,num2 ;
        cin >> num1 >> num2;
    for (int i = 0 ; i < num1.length() ; i++)
    {
        if (num1[i] == '0' && num2[i] == '0' ||  num1[i] == '1' && num2[i] == '1')
        {
            cout << "0";
        }
        else{
            cout << "1";
        }
    }
}
