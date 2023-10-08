class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        
        int maxPos{}, minPos{}, n = nums.size();

        for(int i = 0; i < n; i++){

            if(nums[i] == 1) minPos = i;
            if(nums[i] == n) maxPos = i;

        }

        return minPos + (n - maxPos - 1) - (maxPos < minPos);
    }
};