class Solution {
public:

int numPrimeArrangements(int n) {

    constexpr int MOD = 1000000007;

    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    long int ans = 1, 
             primes = accumulate(prime.begin() + 2, prime.end(), 0), 
             notPrimes = n - primes;

    for (int i = 1; i <= max(notPrimes, primes); i++) {

        ans %= MOD;

        if (i <= notPrimes) ans *= i;
        if (i <= primes) ans *= i;

    }

    return ans % MOD;
}  

};