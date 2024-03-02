class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int L{}, R{k - 1}, n = nums.size(), minDif{INT_MAX};

        while(R < n){

            minDif = min(minDif, nums[R] - nums[L]);

            R++;
            L++;
        }

        return minDif;
    }
};