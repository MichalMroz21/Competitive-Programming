class Solution {
public:

    bool isPrime(int a){

        if(a <= 1) return false;

        for(int i = 2; i < a; i++){
            if(a % i == 0) return false;
        }

        return true;
    }

    int countPrimeSetBits(int left, int right) {

        int ans{};

        for(int i = left; i <= right; i++){
            ans += isPrime(__builtin_popcount(i));
        }

        return ans;
    }
};