class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        
        int maxVal{}, maxIndex{-1};

        for(int i = 0; i <= nums.size() - k; i++){
            if(nums[i] > maxVal){
                maxIndex = i;
                maxVal = nums[i];
            }            
        }

        return vector<int>(nums.begin() + maxIndex, nums.begin() + maxIndex + k);
    }
};