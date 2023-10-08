class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        
        int n = nums.size(), L{}, R = n - 1;

        while(L < R){
            int m = L + (R - L)/2;

            if(nums[m] < target) L = m + 1;
            if(nums[m] == target) R = m;
            if(nums[m] > target) R = m - 1;
        }

        return R + n/2 < n && nums[R + n/2] == target;
    }
};