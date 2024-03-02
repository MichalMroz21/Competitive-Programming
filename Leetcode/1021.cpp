class Solution {
public:
    string removeOuterParentheses(string s) {
        string str{};

        int parCount{};

        for(auto i : s){

            if(i == ')') parCount--;
            if(parCount >= 1) str += i;
            if(i == '(') parCount++;
            
        }

        return str;
    }
};