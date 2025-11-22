///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void fun (int n)
{
    if(n > 0)
    {
        cout << "I love Recursion" << endl;
        fun(n-1);
    }
}
int main ()
{
    int n;
    cin >> n;
    fun(n);
}
