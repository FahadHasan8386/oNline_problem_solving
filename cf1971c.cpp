#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x  = min (a , b);
        int y = max (a ,b);
        int cnt = 0;
        for(int i = x; i < y ;i++)
        {
            if(i == c || i == d)
            {
                cnt++;
            }
        }
        if(cnt == 2 )
        {
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }

        }
}
