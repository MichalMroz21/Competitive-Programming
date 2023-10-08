class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums2Indexes{};

        for(int i = 0; i < nums2.size(); i++) nums2Indexes[nums2[i]] = i;

        vector<int> mapping{};

        for(auto i : nums1){
            mapping.push_back(nums2Indexes[i]);
        } 

        return mapping;
    }
};