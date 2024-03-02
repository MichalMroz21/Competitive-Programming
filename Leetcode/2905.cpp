class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        
        int minL{INT_MAX}, maxL{INT_MIN}, n = nums.size(), minI{-1}, maxI{-1};

        for(int i = indexDifference; i < n; i++){

            if(nums[i - indexDifference] < minL){
                minL = nums[i - indexDifference];
                minI = i - indexDifference;
            }
            if(nums[i - indexDifference] > maxL){
                maxL = nums[i - indexDifference];
                maxI = i - indexDifference;
            }

            if(nums[i] - minL >= valueDifference) return {minI, i};
            if(maxL - nums[i] >= valueDifference) return {maxI, i};
        }

        return {-1, -1};
    }
};