#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n1 ,n2;
        cin >> n1 >> n2;
    int i = 1 ;
    int count = 0;

    for (;;){
        if(n1 - i == 0) break;
        if(n2 - i == 0) break;
        i++;
        count++;
    }
    if(count % 2 == 0 )
    {
        cout << "Akshat ";
    }else {
        cout << "Malvika";
    }
}
