class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans{};

        for(auto i : nums){

            string str = to_string(i);
            for(auto j : str){

                ans.push_back(j - '0');
                //or while(i != 0) with % 10 and / 10.
            }

        }

        return ans;
    }
};