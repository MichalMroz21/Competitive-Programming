class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size(), L = 0, R = n - 1;

        while(true){

            while(L < n && !(nums[L] % 2)) L++;
            while(R >= 0 && (nums[R] % 2)) R--;

            if(L >= R) break;

            swap(nums[L], nums[R]);
        }

        return nums;
    }
};