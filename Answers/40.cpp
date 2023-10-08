class Solution {
public:

    static constexpr int MAX_CAND = 50;
    int prev = MAX_CAND + 1;

    void backtrackDFS(vector<int>& candidates, vector<vector<int>>& res, int target, int index, vector<int>& combination){

        if(target < 0) return;

        if(target == 0){
            res.push_back(combination);
        }

        for(int i = index; i < candidates.size(); i++){

            if(prev == candidates[i]) continue;

            combination.push_back(candidates[i]);
            backtrackDFS(candidates, res, target - candidates[i], i + 1, combination);
            combination.pop_back();

            prev = candidates[i];

        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)    
    {
        
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res{};
        vector<int> combination{};

        int index = 0;

        backtrackDFS(candidates, res, target, index, combination);
        return res;

    }
};