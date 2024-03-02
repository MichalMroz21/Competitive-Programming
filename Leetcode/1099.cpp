class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        const size_t n = nums.size();
        int sum{-1};

        for(size_t i{}; i < n; i++){

            const int curr{nums[i]}, limit{k - curr};

            if(limit <= 1) continue;

            size_t L{i + 1}, R{n - 1};

            if(L >= n || R < 0) continue;

            while(L + 1 < R){

                const size_t m = L + (R - L)/2;

                if(nums[m] < limit) L = m;
                else R = m;

            }

            if(nums[R] < limit) sum = max(sum, nums[R] + curr);
            else if(nums[L] < limit) sum = max(sum, nums[L] + curr);

        }

        return sum;

    }
};