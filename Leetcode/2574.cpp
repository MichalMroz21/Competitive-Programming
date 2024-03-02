class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0) return {};

        vector<int> leftSum(n), rightSum(n), answer(n);

        leftSum[0] = nums[0];
        
        for(int i = 1; i < n; i++) leftSum[i] = leftSum[i - 1] + nums[i];

        for(int i = n - 1; i >= 0; i--) {
            rightSum[i] = (i == n - 1 ? 0 : rightSum[i + 1]) + nums[i];
            answer[i] = abs( (i == n - 1 ? 0 : rightSum[i + 1]) - (i == 0 ? 0 : leftSum[i - 1]) );
        }

        return answer;
    }
};