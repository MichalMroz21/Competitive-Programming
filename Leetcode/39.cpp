class Solution {
public:


    void backtrackDFS(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int j){
        
        if(target == 0) {
            res.push_back(combination);      
        }

        if(target <= 0) return;

        for(int i = j; i<candidates.size(); i++){

            combination.push_back(candidates[i]);
            backtrackDFS(candidates, target - candidates[i], res, combination, i);
            combination.pop_back();

        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res{};
        vector<int> comb{};
        backtrackDFS(candidates, target, res, comb, 0);

        return res;

    }
};