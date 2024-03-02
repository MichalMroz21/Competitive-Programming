class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, bool> mp1{}, mp2{};

        for(auto i : nums1){
            mp1[i] = true;
        }

        for(auto i : nums2){
            mp2[i] = true;
        }

        int a{}, b{};

        for(auto i : nums1){
            a += mp2[i];
        }

        for(auto i : nums2){
            b += mp1[i];
        }

        return {a, b};
    }
};