#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
      cin >> t;
    read:
    while(t--){
        int sz;
            cin >> sz;
        vector<int>v;
        v.resize(sz);
        for(int i = 0 ;i < sz ;i++)
        {
            cin >>v[i];
        }
        sort(v.begin(),v.end());

        for (int i = 1;i < sz ;i++){
            if (v[i] - v[i-1] > 1)
            {
                cout << "NO" << endl;
                goto read;
            }
        }
        cout << "YES" << endl;
}
return 0;
}
