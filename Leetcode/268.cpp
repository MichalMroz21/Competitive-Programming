class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int theoreticalSum = (n / 2.0) * (n + 1);

        int practicalSum = accumulate(nums.begin(), nums.end(), 0);
        return theoreticalSum - practicalSum;

    }
};