class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> cntMap{};

        for(auto i : nums){
            cntMap[i]++;
            if(cntMap[i] > 2) return false;
        }

        return true;
    }
};
