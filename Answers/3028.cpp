class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sm{}, ans{};

        for(int i = 0; i < nums.size(); i++){
            sm += nums[i];
            ans += (sm == 0);
        }

        return ans;
    }
};