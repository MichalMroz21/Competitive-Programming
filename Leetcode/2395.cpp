class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, bool> sumMap{};

        for(int i = 1; i < nums.size(); i++){

            int sum = nums[i] + nums[i - 1];
            if(sumMap[sum]) return true;
            sumMap[sum] = true;

        }

        return false;
    }
};