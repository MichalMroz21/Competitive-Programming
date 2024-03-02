class Solution {
public:

    void backtrackDFS(vector<int>& nums, vector<vector<int>>& res, vector<int>& comb){

        if(nums.empty()){
            
            res.push_back(comb);

        }

        for(int i = 0; i < nums.size(); i++){

            int a = nums[i];

            comb.push_back(a);
            nums.erase(nums.begin() + i, nums.begin() + i + 1);

            backtrackDFS(nums, res, comb);

            nums.insert(nums.begin() + i, a);
            comb.pop_back();

        }


    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res{};
        vector<int> comb{};

        backtrackDFS(nums, res, comb);
        return res;
    }
};