class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int ans{}, n = nums.size(), lastNegative{INT_MAX}, firstPositive{INT_MAX};

        for(int i = 0; i < n; i++){

            if(nums[i] < 0) lastNegative = nums[i];
            else if(firstPositive == INT_MAX) firstPositive = nums[i];

            if(nums[i] < 0 && k > 0) {nums[i] *= -1; k--;}
            ans += nums[i];
        }

        if(k % 2 == 1){
            ans -= 2 * min(abs(lastNegative), firstPositive);
        }

        return ans;
    }
};