/// Binary Exponential . Find Power of a^n using log(n)
int power(int a, int n)
{
    int res = 1;

    while (n)
    {
        if (n % 2)
        {
            res *= a;
            n--;
        }
        else
        {
            a *= a;
            n /= 2;
        }
    }

    return res;
}








///Find Prime Factor using squaroot of n
void primeFact(int N)
{
    for (int i = 2; i * i <= N; i++)  // Iterate up to sqrt(N)
    {
        if (N % i == 0)
        {
            int cnt = 0;
            while (N % i == 0)
            {
                cnt++;
                N /= i;
            }
            cout << i << "^" << cnt << endl;
        }
    }
    if (N > 1)
        cout << N << "^" << 1 << endl;
} 


/// Or Store the factors

void primeFact(int N)
{
    vector<int> factors;

    for (int i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            factors.push_back(i);
            N /= i;
        }
    }
    if (N > 1)
        factors.push_back(N);

    
    for (size_t i = 0; i < factors.size(); ++i)
    {
        cout << factors[i];
        if (i != factors.size() - 1)
            cout << "*";
    }
    cout << endl;
}







/// Factorial of A number
#define MOD 998244353

int factorial(int n)
{
   long long fact = 1;
   for(int i = 1; i <= n; ++i)
   {
     fact = ((fact % MOD) * (i % MOD)) % MOD;
   }

   return fact;
}




//// Reverse Of a Number

int reverseOfAnumber(int n)
{
    int rem = 0, rev = 0;
    while(n > 0)
    {
        rem = n % 10;
        rev = rev *10 + rem;
        n /= 10;
    }
    return rev;
}



///Count and store divisors number of divisors of a number using square root of n

int countAndStoreDivisor(int n)
 {
   set<int>s;
   int cnt = 0;
   for(int i = 1; i * i <= n; ++i)
   {
        if(n%i == 0)
        {
            int a = i;
            int b = n/i;
            s.insert(a);
            s.insert(b);
        }
   }
   
   return s.size();
 }







#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


/// count number of divisor using harmonic series;

const int mx = 1e7 + 123;
int cnt[mx];

int main()
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = i; j <= n; j = j + i)
	{
		cnt[j]++;
	}
    }
}

for(int i = 1; i <= n; ++i)cout << i << " " << cnt[i] << endl;

}



///push all the divisor of a number in vector of array using harmonic series

const int mx = 1e6 + 123;
vector<int>d[mx];

int main()
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = i; j <= n; j = j + i)
	{
		d[i].push_back(j);
	}
    }

   for(int i = 1; i <= n; ++i)
   {
      cout << i << " : ";

     for(auto u:d[i])
     {
	cout << u << " ";
     }

   }

}



//// Using sqrt n find prime numbers

bool isPrime(int n)
{
    if(n == 0 || n == 1) return false;
 
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0) return false;
    }
    return true;
}





/// sieve of Eratosthenes

const int mx = 1e8;
bitset<mx> isPrime;
vector<int> primes;

void primeGen ( int n )
{
    isPrime[2] = 1;
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }

    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

int main()
{
    optimize();

    int lim = 1e8;

    primeGen(lim);


    return 0;
}


///Gcd of n numbers

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin >> n;
   vector<int>v(n);

   for(int i = 0; i < n; ++i) cin >> v[i];
   int gcdOfNnumber = v[0];

   for(int i = 1; i < n; ++i)
   {
       gcdOfNnumber = __gcd(gcdOfNnumber, v[i]);
   }
   cout << gcdOfNnumber << endl;


    return 0;
}






/// Find Lcm of N numbers
/// gcd(a,b) * lcm(a,b) = a*b

#include <bits/stdc++.h>
using namespace std;

long long lcmOfNnumbers(const vector<int>& v)
{
    long long result = v[0];
    for (int i = 1; i < (int)v.size(); ++i)
    {
        result = (result * v[i]) / __gcd(result, (long long)v[i]);
    }
    return result;
}

int main()
{
    int t; cin >> t;

    while (t--)
    {
        int m; cin >> m;
        vector<int> v(m);
        for (int i = 0; i < m; ++i) cin >> v[i];

        cout << lcmOfNnumbers(v) << "\n";
    }

    return 0;
}

/// Prime Factorization Using Hermonic Series




const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

const int pMX = 1e7+123;
vector<int> factors[pMX];

int main()
{
    optimize();

    int lim = 1e6;
    primeGen(lim);

    for ( auto p : primes ) {
        for ( int i = p; i <= lim; i += p ) {
            int n = i;

            while ( n % p == 0 ) {
                factors[i].push_back(p);
                n /= p;
            }
        }
    }

    for ( int i = 1; i <= 20; i++ ) {
        cout << i << ": ";
        for ( auto p : factors[i] ) cout << p << " ";
        cout << endl;
    }



    return 0;
}

