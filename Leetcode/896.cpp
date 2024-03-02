class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        if(nums.empty()) return false;

        int prev = nums[0];
        bool allHigher = true, allLower = true;

        for(auto i : nums){

            i == prev ? prev = i : i > prev ? allLower = false : allHigher = false;
            prev = i;
        }

        return allHigher || allLower;

    }
};