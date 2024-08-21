#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while(t--) {  // Loop through each test case
        int n;
        cin >> n;  // Read the limit value for each character

        string s;
        cin >> s;  // Read the string

        int cntA = 0, cntB = 0, cntC = 0, cntD = 0, cnts = 0;

        // Count occurrences of 'A', 'B', 'C', and 'D'
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') cntA++;
            if(s[i] == 'B') cntB++;
            if(s[i] == 'C') cntC++;
            if(s[i] == 'D') cntD++;
        }

        // Calculate the sum based on the counts and the limit 'n'
        cnts += min(cntA, n);
        cnts += min(cntB, n);
        cnts += min(cntC, n);
        cnts += min(cntD, n);

        // Output the result for the current test case
        cout << cnts << endl;
    }

    return 0;
}
