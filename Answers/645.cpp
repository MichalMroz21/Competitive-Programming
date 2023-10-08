class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);

        int sum{}, n = nums.size();

        for(auto& i : nums){
            sum += abs(i);
            int ind = abs(i) - 1;
            if(nums[ind] < 0) ans[0] = ind + 1;
            else nums[ind] *= -1; 
        }

        ans[1] = (1 + n) * n/2.0 - (sum - ans[0]);
        return ans;
    }
};