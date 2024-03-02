class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        
        int n = sentence1.size(), m = sentence2.size();

        if(n != m) return false;

        unordered_map<string, unordered_map<string, bool>> mp{};

        for(auto& pair : similarPairs) mp[pair[0]][pair[1]] = true;

        for(int i = 0; i < n; i++){
            if(! (sentence1[i] == sentence2[i] 
            || mp[sentence1[i]][sentence2[i]] || mp[sentence2[i]][sentence1[i]] ) ) return false;
        }

        return true;
    }
};