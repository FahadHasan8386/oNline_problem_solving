#include <bits/stdc++.h>
using namespace std;


bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> mp;

    for(char c : magazine)
    {
        mp[c]++;
    }
     for(char c : ransomNote)
    {
        if(mp[c] == 0)
        {
            return false;
        }

        mp[c]--;
    }

    return true;
}


int main()
{
    string ransomNote, magazine;

    cout << "Enter ransomNote: ";
    cin >> ransomNote;

    cout << "Enter magazine: ";
    cin >> magazine;

    if(canConstruct(ransomNote, magazine))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;

}
