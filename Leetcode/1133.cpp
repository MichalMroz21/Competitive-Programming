class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int, int> countMap{};

        int mx{-1};

        for(auto i : nums){
            countMap[i]++;
        }

        for(auto& [key, value] : countMap){
            if(value > 1) continue;
            mx = max(mx, key);
        }

        return mx;
    }
};