class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        int n = nums.size();

        long long ans{};
        long long prev{};
        ans += nums[0] == 0;
        prev = nums[0] == 0;

        for(int i = 1; i < n; i++){

            if(nums[i] == 0) {

                ans += prev + 1;
                prev++;

            }

            else prev = 0;
        }

        return ans;

    }
};