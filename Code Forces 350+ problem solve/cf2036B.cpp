///In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

void fahad() {
  int n, k;
  cin >> n >> k;
  vector<int> brand_cost(k, 0);
  for (int i = 0; i < k; i++) {
    int b, c;
    cin >> b >> c;
    brand_cost[b - 1] += c;
  }
  sort(brand_cost.rbegin(), brand_cost.rend());
  long long ans = 0;
  for (int i = 0; i < min(n, k); i++) {
    ans += brand_cost[i];
  }
  cout << ans << endl;
}

int main()
{

    int tt;
    cin >> tt;

    while(tt--)
    {
        fahad();
    }
    return 0;
}
