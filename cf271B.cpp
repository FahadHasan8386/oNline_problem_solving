/// IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

const int mxx = 502;
const int MAX_PRIME = 100005;

int matrix[mxx][mxx];
bitset<MAX_PRIME + 1> is_prime;

void sieve(int sz) {
    is_prime[2] = 1;
    for(int i = 3 ; i <= sz ; i += 2)is_prime[i] = 1;

    for(int i = 3 ; i*i <= sz ; i += 2)
    {
        if(is_prime[i])
        {
            for(int j = i*i ; j <= sz ; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

int movesToPrime(int value) {
    int moves = 0;
    while (!is_prime[value]) {
        value++;
        moves++;
    }
    return moves;
}

int main() {
    int row, col;
    cin >> row >> col;

    sieve(MAX_PRIME);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    int minRowValue = INT_MAX;
    for (int i = 0; i < row; i++) {
        int rowMoves = 0;
        for (int j = 0; j < col; j++) {
            rowMoves += movesToPrime(matrix[i][j]);
        }
        minRowValue = min(minRowValue, rowMoves);
    }

    int minColValue = INT_MAX;
    for (int j = 0; j < col; j++) {
        int colMoves = 0;
        for (int i = 0; i < row; i++) {
            colMoves += movesToPrime(matrix[i][j]);
        }
        minColValue = min(minColValue, colMoves);
    }

    int result = min(minRowValue, minColValue);
    cout << result << endl;

    return 0;
}
