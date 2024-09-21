#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e');
}

bool isConsonant(char ch)
{
    return (ch == 'b' || ch == 'c' || ch == 'd');
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result = "";

        for (int i = 0; i < n;)
        {
            if (i + 2 < n && isConsonant(s[i]) && isVowel(s[i + 1]) && isConsonant(s[i + 2] && isConsonant(s[i + 3])))
            {
                result += s[i];
                result += s[i + 1];
                result += s[i + 2];
                result += '.';
                i += 3;
                if (i + 1 < n && isConsonant(s[i]) && isVowel(s[i + 1]))
            {
                result += s[i];
                result += s[i + 1];
                result += '.';
                i += 2;
            }
            else
            {
                i++;
            }

            }



        if (!result.empty() && result.back() == '.')
        {
            result.pop_back();
        }

        cout << result << endl;
    }

    return 0;
}
}
