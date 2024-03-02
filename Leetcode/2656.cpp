class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        //Formula for arithmetic sum: Sn = (a1 + an)/2 * n, a1 - starting value, an - ending value, n - number of values.
        //Basically I'm calculating a sum from 1 to k - 1, with the difference of 1.
        return *max_element(nums.begin(), nums.end()) * k + (1 + k - 1)/2.0 * (k - 1);

    }
};