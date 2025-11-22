#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<string> unique_leaves;
    for (int i = 0; i < n; ++i)
    {
        string leaf;
        getline(cin, leaf);
        unique_leaves.insert(leaf);
    }

    cout << unique_leaves.size() << endl;
    return 0;
}
