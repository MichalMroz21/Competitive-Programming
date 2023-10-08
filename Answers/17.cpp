class Solution {
public:
    unordered_map<int, string> phoneMap{
        {2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, 
        {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}
    };

    void backtrackDFS(string& digits, int j, vector<string>& res, string& comb){

        if(j >= digits.size()){
            res.push_back(comb);
            return;
        }

        int a = digits[j] - '0';
        string phoneLetters = phoneMap[a];

        for(int k = 0; k < phoneLetters.size(); k++){

            char b = phoneLetters[k];
            comb.push_back(b);
            backtrackDFS(digits, j + 1, res, comb);
            comb.pop_back();

        }       
        return;
    }


    vector<string> letterCombinations(string digits) {
        
        if (digits.empty()) return vector<string>{};

        vector<string> res{};
        string comb{};
        backtrackDFS(digits, 0, res, comb);

        return res;
    }
};