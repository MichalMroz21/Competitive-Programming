class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        int minSum{INT_MAX}, minR{INT_MAX}, minL{INT_MAX}, n = nums.size();

        vector<int> minRight(n);

        for(int i = n - 1; i >= 0; i--){
            minRight[i] = minR;
            minR = min(minR, nums[i]);
        }

        for(int i = 0; i < n - 1; i++){
            
            if(nums[i] > minL && nums[i] > minRight[i]){
                minSum = min(minSum, nums[i] + minL + minRight[i]);
            }

            minL = min(minL, nums[i]);
        }
        return minSum == INT_MAX ? -1 : minSum;
    }
};