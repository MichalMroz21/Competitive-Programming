class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int baseI{}, baseJ{}, i{}, j{};
        int n = word1.size(), m = word2.size();

        while(true){

            if(baseI == n && baseJ == m) break;

            if(baseI == n && baseJ != m) return false;
            if(baseI != n && baseJ == m) return false;

            if(word1[baseI][i++] != word2[baseJ][j++]) return false;

            if(i == word1[baseI].size()) {i = 0; baseI++;}
            if(j == word2[baseJ].size()) {j = 0; baseJ++;}
        }

        return true;
    }
};