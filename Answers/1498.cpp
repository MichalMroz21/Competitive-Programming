class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {

        constexpr unsigned int MOD = 1'000'000'007;

        sort(nums.begin(), nums.end());

        size_t n = nums.size();
        if(n == 0) return 0;

        vector<int> powers(n, 1);
        for(int i = 1; i < n; i++) powers[i] = (powers[i - 1] * 2) % MOD;

        int ret{};

        for(int i = 0; i < n; i++){

            const int curr = nums[i], targetDiff = target - curr;
            unsigned int L = i, R = n;

            while(L < R){

                const unsigned int m = L + (R - L)/2;

                if(nums[m] > targetDiff) R = m;
                else L = m + 1;

            } 

            const int sequenceLength = R - 1 - i;

            if(sequenceLength >= 0) ret = ret % MOD + powers[sequenceLength];      
        }

        return ret;
    }
};