class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, pair<bool, int>> hashmap{};
        int n = nums.size();

        for(int i = 0; i < n; i++){

            if(hashmap[nums[i]].first == false) hashmap[nums[i]].first = true;
            else if(abs(hashmap[nums[i]].second - i) <= k) return true;

            hashmap[nums[i]].second = i;

        }

        return false;

    }
};