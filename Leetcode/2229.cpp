class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end()),
            L = mn, n = nums.size(), R = mn + n - 1;
        long long expectedSum = (L + (R - L) / 2.0) * n, sm{};

        unordered_map<int, bool> wasBefore{};

        for(auto i : nums){
            if(wasBefore[i]) return false;
            wasBefore[i] = true;
            sm += i;
        }

        return sm == expectedSum;
    }

};