class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> word1Freq{};
        unordered_map<char, int> word2Freq{};

        for(auto i : word1) word1Freq[i]++;
        for(auto i : word2) word2Freq[i]++;

        for(char c = 'a'; c <= 'z'; c++){

            if(abs(word1Freq[c] - word2Freq[c]) > 3) return false;

        }

        return true;
    }
};