#include <bits/stdc++.h>
using namespace std;

string helloSay (string word)
    {

        string s = "hello";
        int ltrcounter = 0;

        for (char letter : word){

            if (letter == s[ltrcounter])
            {
                ltrcounter++;
                if(ltrcounter == s.length()){
                    return "YES";
                }
            }

        }
        return "NO";
    }

int main ()
{
    string word;
            cin >> word;

    cout << helloSay(word);

}
