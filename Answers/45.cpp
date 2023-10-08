class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n, 0);

        dp[0] = 0;
        int maxDistance{1};

        for(int i = 0; i<n - 1; i++){

            int dist = nums[i];

            if(dist == 0) continue;

            else if(i + dist + 1 > maxDistance){

                int j{};
                for(j = maxDistance; j<i + dist + 1; j++){

                    if(j == n) break;
                    dp[j] = dp[i] + 1;

                }

                maxDistance = j;

            }

        }

        return dp[n - 1];

    }
};