#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long tt;
    cin >> tt;

    while (tt--) {
        long long u, vv, x, y;
        cin >> u >> vv;
        cin >> x >> y;

        vector<pair<long long, long long>> intervals;
        intervals.push_back({u, vv});
        intervals.push_back({x, y});
        sort(intervals.begin(), intervals.end());

        int start1 = intervals[0].first;
        int end1 = intervals[0].second;
        int start2 = intervals[1].first;
        int end2 = intervals[1].second;

        if (end1 < start2) {
            cout << 1 << endl;
        }
        else if (end1 >= end2) {
            long long moves = abs(start2 - end2) + 2;
            if (start1 == start2) moves--;
            if (end1 == end2) moves--;
            cout << moves << endl;
        }
        else {
            long long moves = abs(end1 - start2) + 2;
            if (start1 == start2) moves--;
            if (end1 == end2) moves--;
            cout << moves << endl;
        }
    }

    return 0;
}
