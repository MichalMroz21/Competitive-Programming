class Solution {
public:

    void backtrackDFS(vector<string>& res, string& comb, int open, int closed){

        if(open == 0 && closed == 0){
            res.push_back(comb);
            return;
        }

        if(open > 0){
            comb.push_back('(');
            backtrackDFS(res, comb, open - 1, closed);
            comb.pop_back();
        }

        if(open < closed){
            comb.push_back(')');
            backtrackDFS(res, comb, open, closed - 1);
            comb.pop_back();
        }

    }


    vector<string> generateParenthesis(int n) {
        
        vector<string> res{};
        string comb{};

        backtrackDFS(res, comb, n, n);
        return res;
    }
};