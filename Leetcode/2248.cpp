class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        int n = nums.size();

        map<int, int> cntMap{};

        for(auto& array : nums){

            for(auto& i : array) cntMap[i]++;

        }

        vector<int> ans{};

        for(auto& [key, value] : cntMap){

            if(value == n) ans.push_back(key); 

        }

        return ans;
    }
};