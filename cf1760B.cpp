/// IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<char> v(n);

        // Reading characters into the vector
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // Sorting characters in descending order
        sort(v.rbegin(), v.rend());

        // Taking the largest character (first element after sorting)
        char c = v[0];

        // Calculating the value corresponding to the character
        int value = c - 'a' + 1;

        cout << value << endl;
    }

    return 0;
}
