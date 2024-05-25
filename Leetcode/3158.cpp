class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(), nums.end());

        int ans{};

        for(auto i : nums){
            ans ^= i;
        }
        for(auto& i : st){
            ans ^= i;
        }

        return ans;
    }
};