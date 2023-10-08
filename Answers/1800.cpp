class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int maxSum{}, prev = nums[0], currSum{};

        for(const auto& i : nums){
            
            if(prev >= i) currSum = i;
            else currSum += i;
        
            maxSum = max(maxSum, currSum);
            prev = i;
        }

        return maxSum;
    }
};