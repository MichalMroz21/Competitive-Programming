class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        unordered_map<char, int> word1Map{}, word2Map{};

        for(auto& i : word1) {
            word1Map[i]++;
        }
        
        for(auto& i : word2) {
            if(word1Map[i] == 0) return false;
            word2Map[i]++;
        }

        unordered_map<int, int> countOfcount{};

        for(auto& [key, value] : word1Map){
            countOfcount[value]++;
        }

        for(auto& [key, value] : word2Map){
            if(countOfcount[value] == 0) return false;
            countOfcount[value]--;
        }
        
        return true;
    }
};