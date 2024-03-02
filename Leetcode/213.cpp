class Solution {
public:

    int normalRob(int L, int R, vector<int>& nums){

        int n = R - L + 1;

        vector<int> dp(n, 0);

        dp[0] = nums[L];
        if(n == 1) return dp[0];
        dp[1] = max(dp[0], nums[L + 1]);

        for(int i = 2; i<n; i++){

            int k = nums[L + i];

            dp[i] = max(dp[i - 1], dp[i - 2] + k);

        }

        return dp[n - 1];

    }

    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1) return nums[0];
        

        return max(normalRob(0, n - 2, nums), normalRob(1, n - 1, nums));

    }
};