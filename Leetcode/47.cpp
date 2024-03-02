class Solution {
public:

    void backtrackDFS(vector<vector<int>>& res, vector<int>& comb, vector<int> nums){

        unordered_map<int, bool> history{};

        if(nums.empty()){
            res.push_back(comb);
        }

        for(int i = 0; i<nums.size(); i++){

            int a = nums[i];
            if(history[a] == false){

                comb.push_back(a);
                nums.erase(nums.begin() + i, nums.begin() + i + 1);
                backtrackDFS(res, comb, nums);
                nums.insert(nums.begin() + i, a);
                comb.pop_back();

                history[a] = true;
            }

            
        }

    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res{};
        vector<int> comb{};

        backtrackDFS(res, comb, nums);
        return res;

    }
};