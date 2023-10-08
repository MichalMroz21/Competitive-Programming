class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxSum{};
        for(int i=0; i<accounts.size(); i++){

            int sum{};
            for(int j=0; j<accounts[i].size(); j++){

                sum += accounts[i][j];

            }
            
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};