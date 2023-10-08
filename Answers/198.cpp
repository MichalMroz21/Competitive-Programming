class Solution {
public:

    int robRec(vector<int>& nums, int n, unordered_map<int, int>& memo){

        if(n == 0) return nums[0];
        if(n == 1) return max(nums[0], nums[1]);
        if(memo.find(n) != memo.end()) return memo[n];
        memo[n] = max(robRec(nums, n-1, memo), robRec(nums, n-2, memo) + nums[n]);
        return memo[n];
    }


    int rob(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> memo{};
        return robRec(nums, n - 1, memo);

    }
};