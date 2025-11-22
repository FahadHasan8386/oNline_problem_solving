#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
        cin >> n;
    int sum = 0;
    int note[5] = {1 , 5 ,10 ,20 ,100};

    for (int i = 4 ; i >= 0 ;i--){
        if(n >= note[i]){
            sum += n / note[i];
            n = n % note[i];
        }
    }
    cout << sum << endl;
    return 0 ;
}
