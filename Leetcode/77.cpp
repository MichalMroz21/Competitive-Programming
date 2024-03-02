class Solution {
public:

    void backtrackDFS(vector<vector<int>>& res, vector<int>& comb, int n, int k, int j){

        if(k == 0){
            res.push_back(comb);
            return;
        }

        for(int i = j; i <= n; i++){
            comb.push_back(i);
            backtrackDFS(res, comb, n, k - 1, i + 1);
            comb.pop_back();
        }

    }

    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> res{};
        vector<int> comb{};

        backtrackDFS(res, comb, n, k, 1);
        return res;
    }
};