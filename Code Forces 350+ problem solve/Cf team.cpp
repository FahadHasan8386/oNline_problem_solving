#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int problems_solved = 0;
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Check if at least two friends are sure about the solution
        if (petya + vasya + tonya >= 2) {
            problems_solved++;
        }
    }

    cout << problems_solved << endl;

    return 0;
}
