class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        int i = 0;

        for(auto& word : words){

            char first = word[0];

            if(s[i] != first) return false;

            if(i == s.size()) return false;

            i++;
        }

        return i == s.size();
    }
};