class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1, curr = 1;

        bool increasing = true;

        if(nums.empty()) return 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] > nums[i]){
                if(increasing) curr = 1;
                increasing = false;
            }
            else if(nums[i - 1] < nums[i]){
                if(!increasing) curr = 1;
                increasing = true;
            }
            else curr = 0;

            curr++;
            ans = max(ans, curr);
        }

        return ans;
    }
};