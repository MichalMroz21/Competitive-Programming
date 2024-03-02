class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());

        int ans = (high - low) - 2*k;
        if(ans < 0) ans = 0;
        return ans;
    }
};