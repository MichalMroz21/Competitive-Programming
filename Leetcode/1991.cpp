class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sumOfArray = accumulate(nums.begin(), nums.end(), 0), sumOnLeft{}, n = nums.size();

        for(int i = 0; i < n; i++){
            if(sumOnLeft == sumOfArray - nums[i] - sumOnLeft) return i;
            sumOnLeft += nums[i];
        }

        return -1;
    }
};