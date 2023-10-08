class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        if(nums.empty()) return {};

        vector<string> ans{};

        optional<int> right;

        int left = nums[0];
        
        long long expected{left + 1};

        for(int i = 1; i < nums.size(); i++){

            if(nums[i] != expected){
                ans.push_back(to_string(left) + (right == nullopt ? "" : "->" + to_string(*right)) );
                left = nums[i];
                right = nullopt;
            }
            else{
                right = nums[i];
            }

            expected = nums[i];
            expected++;
        }

        ans.push_back(to_string(left) + (right == nullopt ? "" : "->" + to_string(*right)) );

        return ans;
    }
};