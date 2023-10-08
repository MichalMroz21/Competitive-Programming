class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> countMap{};

        for(auto i : nums) countMap[i]++;

        int res{};

        for(auto i : nums) {
            countMap[i]--;
            res += countMap[i];
        }

        return res;

    }
};