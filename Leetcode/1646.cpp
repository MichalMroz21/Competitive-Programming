class Solution {
public:

    int getMaximumGenerated(int n) {
        
        vector<int> dp(n + 1);

        if(n == 0) return 0;
        if(n <= 2) return 1;

        dp[0] = 0;
        dp[1] = 1;

        int maxVal{};

        for(int i = 0; i <= n; i++){

            if(i % 2 == 0){
                dp[i] = dp[i / 2];
            }
            else dp[i] = dp[i / 2] + dp[i / 2 + 1];

            maxVal = max(maxVal, dp[i]);

        }

        return maxVal;
    }
};