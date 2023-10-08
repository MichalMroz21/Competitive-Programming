class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ret{};
        for(auto i : nums) ret ^= i;
        return ret;

    }
};