#include <iostream>
#include <string>
using namespace std;

string balanceParentheses(const string& s) {
    int openCount = 0;
    string result = "";

    // First pass: Ensure the parentheses are balanced
    for (char ch : s) {
        if (ch == '(') {
            openCount++;
            result += ch;
        } else if (ch == ')') {
            if (openCount > 0) {
                openCount--;
                result += ch;
            } else {
                result = '(' + result + ')';
            }
        }
    }

    // Add any remaining unmatched opening parentheses
    result += string(openCount, ')');

    return result;
}

int main() {
    string s;
    cin >> s;

    string balanced = balanceParentheses(s);
    cout << balanced << endl;

    return 0;
}
