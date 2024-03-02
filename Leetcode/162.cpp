class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int L = 0;
        int R = nums.size() - 1;

        while(L < R){

            int m = L + (R - L)/2;

            if(nums[m] > nums[m+1]) R = m;
            else L = m + 1;

        }

        return L;
    }
};