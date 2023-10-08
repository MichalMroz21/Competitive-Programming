class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> count{};
        int n = nums.size();

        for(auto i : nums){

            count[i]++;
            if(count[i] == n/2 + 1) return i;

        }

        return nums[0];

    }
};