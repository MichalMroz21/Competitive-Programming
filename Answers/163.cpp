class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        
        vector<vector<int>> res{};

        nums.push_back(upper + 1);

        for(int i = 0; i < nums.size(); i++){

            int a = i != 0 ? nums[i - 1] : lower - 1, b = nums[i];

            if(a + 1 < b){
                res.push_back({a + 1, b - 1});
            }

        }

        return res;
    }
};