class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, bool> numExistMap{};

        for(auto i : nums){

            if(numExistMap[i]) return true;
            numExistMap[i] = true;

        }

        return false;

    }
};