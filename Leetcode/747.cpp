class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto maxN = max_element(nums.begin(), nums.end());

        for(auto& i : nums){
            if(i == *maxN) continue;
            if(i > *maxN / 2) return -1;
        }

        return distance(nums.begin(), maxN);
    }
};