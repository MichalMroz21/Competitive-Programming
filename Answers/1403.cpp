class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {

        sort(nums.rbegin(), nums.rend());

        int sum = accumulate(nums.begin(), nums.end(), 0), subsequenceSum{}, i{}, n = nums.size();

        while(i < n){

            subsequenceSum += nums[i];
            sum -= nums[i];

            if(subsequenceSum > sum) break;
            i++;
        }

        return vector<int>(nums.begin(), nums.begin() + i + 1);
    }
};