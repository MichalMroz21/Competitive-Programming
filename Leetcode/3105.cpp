int longestMonotonicSubarray(const vector<int>& nums) {
        int ans = 1;
        for (int inc = 1, dec = 1, i = 1; i < ssize(nums); ++i) {
            inc = nums[i - 1] <= nums[i] ? 1 : inc + 1;
            dec = nums[i - 1] >= nums[i] ? 1 : dec + 1;
            ans = max({ans, inc, dec});
        }
        return ans;
    }