#include <limits>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.empty()) return 0;
        if(nums.size() == 1) return 1;

        int k{};
        int new_arr{};
        int cmp_val = numeric_limits<int>::min();

        for(int i=0; i<nums.size(); i++){
            if(cmp_val != nums[i]) {
                cmp_val = nums[i];
                nums[new_arr] = cmp_val;
                new_arr++;
                k++;
            }
        }

        return k;
    }
};