#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n;
        cin >> n;

        bool has_11 = false, has_00 = false;

        // Initial scan to find if "11" or "00" is present in the string
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1' && s[i + 1] == '1') has_11 = true;
            if (s[i] == '0' && s[i + 1] == '0') has_00 = true;
        }

        while (n--)
        {
            int a, b;
            cin >> a >> b;
            a--; // Convert to 0-based index

            // Update the character at position `a` in the string
            s[a] = '0' + b;

            // Recheck around position `a` to update `has_11` and `has_00`
            has_11 = false;
            has_00 = false;
            for (int i = max(0, a - 1); i <= min((int)s.size() - 2, a + 1); i++) {
                if (s[i] == '1' && s[i + 1] == '1') has_11 = true;
                if (s[i] == '0' && s[i + 1] == '0') has_00 = true;
            }

            // Output result based on presence of "11" and "00"
            if (has_11 && has_00) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
