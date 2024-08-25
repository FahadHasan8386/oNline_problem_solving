///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int one, two, three;
        int a , b ,c ;
        cin >> a >> b >> c;

        if(abs(b-c) % 2 == 0)one = 1;
        else one = 0;
        if(abs(a-c) % 2 == 0)two = 1;
        else two = 0;
        if(abs(a-b) % 2 == 0)three = 1;
        else three = 0;

        cout << one << " " <<two << " " <<three <<endl;
    }
}
