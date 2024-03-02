class Solution {
public:

    vector<bool> sieveEra(int max){

        vector<bool> primes(max + 1, true);

        if(primes.empty()) return {};

        primes[0] = false;

        if(primes.size() == 1) return primes;

        primes[1] = false;

        for(int i = 2; i <= sqrt(max); i++){

            if(primes[i]){

                for(int j = i * i; j <= max; j += i){
                    primes[j] = false;
                }
            }
        }

        return primes;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        
        int n = nums.size(), R{}, ans{};

        for(int i = 0; i < n; i++){

            R = max(R, nums[i][i]);
            R = max(R, nums[n - i - 1][i]);

        }

        vector<bool> sieve = sieveEra(R);

        for(int i = 0; i < n; i++){

            if(sieve[nums[i][i]]) ans = max(ans, nums[i][i]);
            if(sieve[nums[n - i - 1][i]]) ans = max(ans, nums[n - i - 1][i]);

        }

        return ans;
    }
};