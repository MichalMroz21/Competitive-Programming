class Solution {
public:

    void backtrackDFS(vector<vector<int>>& res, vector<int>& comb, vector<int>& nums, int j){

        res.push_back(comb);

        for(int i = j; i<nums.size(); i++){

            comb.push_back(nums[i]);
            backtrackDFS(res, comb, nums, i + 1);
            comb.pop_back();

        }


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res{};
        vector<int> comb{};

        backtrackDFS(res, comb, nums, 0);
        return res;
    }
};