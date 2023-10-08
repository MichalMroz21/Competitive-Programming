class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        vector<bool> ans{};

        int curr{};

        for(auto i : nums){
            curr *= 2;
            curr += i;
            curr %= 5;

            if(curr == 0) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};