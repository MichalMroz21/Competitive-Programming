class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, bitset<3>> mp{};

        vector<int> ans{};

        for(auto i : nums1) mp[i][0] = 1;
        for(auto i : nums2) mp[i][1] = 1;
        for(auto i : nums3) mp[i][2] = 1;
        
        for(auto [key, value] : mp){
            if(value.count() > 1) ans.push_back(key);
        }

        return ans;
    }
};