class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> wasBefore{};

        vector<int> repeatedNums{};

        int min1{INT_MAX}, min2{INT_MAX}, minRepeated{INT_MAX};

        for(auto i : nums1) {
            min1 = min(min1, i);
            wasBefore[i] = true;
        }

        for(auto i : nums2) {
            min2 = min(min2, i);
            if(wasBefore[i]) repeatedNums.push_back(i);
        }

        for(auto i : repeatedNums){
            minRepeated = min(minRepeated, i);
        }

        if(minRepeated != INT_MAX) return minRepeated;

        if(min1 < min2) return min1 * 10 + min2;
        return min2 * 10 + min1;
    }
};