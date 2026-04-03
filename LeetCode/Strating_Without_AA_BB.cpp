#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string result = "";

        while (a > 0 || b > 0) {
            int n = result.size();

            // If last two characters are same
            if (n >= 2 && result[n-1] == result[n-2]) {
                if (result[n-1] == 'a') {
                    if (b > 0) {
                        result += 'b';
                        b--;
                    }
                } else {
                    if (a > 0) {
                        result += 'a';
                        a--;
                    }
                }
            }
            else {
                // Add the character with larger count
                if (a >= b && a > 0) {
                    result += 'a';
                    a--;
                } else if (b > 0) {
                    result += 'b';
                    b--;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    int a, b;
    cout << "Enter count of a: ";
    cin >> a;

    cout << "Enter count of b: ";
    cin >> b;

    string result = obj.strWithout3a3b(a, b);

    cout << "Result string: " << result << endl;

    return 0;
}
