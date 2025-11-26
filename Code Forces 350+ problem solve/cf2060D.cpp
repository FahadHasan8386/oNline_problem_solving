#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int bad = 0;

        for(int i=0;i<n-1;i++){
            if(a[i] > a[i+1]) bad++;
        }

        cout << (bad <= 1 ? "YES\n" : "NO\n");
    }
}
