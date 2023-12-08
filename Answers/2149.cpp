class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans{};

        vector<int> neg{};

        for(auto i : nums){
            if(i < 0) neg.push_back(i);
        }

        int j{};

        for(auto i : nums){
            if(i > 0){
                ans.push_back(i);
                if(j < neg.size()) ans.push_back(neg[j++]);
            }
        }

        return ans;

    }
};