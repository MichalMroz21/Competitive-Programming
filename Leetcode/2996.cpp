class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int sm{nums[0]};

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1] + 1) break;
            sm += nums[i];
        }

        unordered_set<int> st(nums.begin(), nums.end());

        while(st.find(sm) != st.end()) sm++;

        return sm;
    }
};