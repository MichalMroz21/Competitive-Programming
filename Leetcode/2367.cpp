class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        unordered_map<int, int> indexMap{};

        for(int i = 0; i < nums.size(); i++) indexMap[nums[i]] = i;

        int count{};

        for(int i = 0; i < nums.size(); i++){
            if(indexMap[nums[i] + diff] != 0 && indexMap[nums[i] + 2 * diff] != 0) count++;
        }

        return count;

    }
};