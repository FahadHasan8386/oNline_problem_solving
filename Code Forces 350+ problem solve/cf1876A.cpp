#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, p;
        cin >> n >> p;

        vector<int> arr(n), brr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        vector<pair<int, int>> vec;
        for(int i = 0; i < n; i++)
        {
            vec.push_back({brr[i], arr[i]});
        }

        sort(vec.begin(), vec.end());

        int total_cost = p;
        int remaining_people = n - 1;

        for(int i = 0; i < n && remaining_people > 0; i++)
        {
            int notify_count = min(vec[i].second, remaining_people);
            total_cost += notify_count * vec[i].first;
            remaining_people -= notify_count;
        }

        cout << total_cost << endl;
    }

    return 0;
}
