/// In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int countVowels(string s)
{
    int count = 0;
    for (auto u : s)
    {
        if(u == 'a' ||  u == 'e' || u == 'i' || u == 'o' || u == 'u' )
        {
            count++;
        }
    }
    return count;
}

int main ()
{
    string a , b , c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    int a1 = countVowels(a);
    int b1 = countVowels(b);
    int c1 = countVowels(c);

    if(a1 == 5 && b1 == 7 && c1 == 5)
    {
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }


}
