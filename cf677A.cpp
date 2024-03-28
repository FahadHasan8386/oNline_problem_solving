#include <bits/stdc++.h>
using namespace std;

int main (){
    int t , l;
        cin >> t >> l;
    int arr[t];
    int sum = 0;
    for (int i = 0 ; i < t ;i++){
        cin >> arr[i];

        if(l >= arr[i]){

            sum = sum + 1;
        }
        else{
            sum = sum + 2;
        }
    }
    cout << sum;
}
