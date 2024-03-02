class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int L{}, m{}, key{}, R = nums.size() - 1;

        while (L <= R){

            m = (R + L) >> 1;
            key = nums[m];

            if(key == target) return m;
            if(key < target) L = m + 1;
            else R = m - 1;

        }

        return m + 1 - (key > target);

    }
};