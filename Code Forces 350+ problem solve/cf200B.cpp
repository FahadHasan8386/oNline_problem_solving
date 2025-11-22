#include <bits/stdc++.h>
using namespace std;

int main (){
    int t ;
        cin >> t ;
    float sum = 0 ;
    vector<int> n(t);
    for (int i = 0 ; i < t ; i++){
        cin >> n[i];
        sum += n[i];
    }
    cout << sum / t;
}
