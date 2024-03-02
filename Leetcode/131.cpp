class Solution {
public:

    bool isPalindrome(string& str, int i, int j){

        while(i < j){

            if(str[i++] != str[j--]) return false;

        }

        return true;
    }

    void backtrackDFS(vector<vector<string>>& allComb, vector<string>& comb, string& str, int i){

        if(i == str.size()) allComb.push_back(comb);

        for(int j = i; j < str.size(); j++){

            if(isPalindrome(str, i, j)){

                comb.push_back(str.substr(i, j - i + 1));
                backtrackDFS(allComb, comb, str, j + 1);
                comb.pop_back();

            }
            
        }


    }

    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> allComb{};
        vector<string> comb{};

        backtrackDFS(allComb, comb, s, 0);

        return allComb;
    }
};