class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> magazineCharCount{};

        for(auto i : magazine) magazineCharCount[i]++;
        for(auto i : ransomNote) if(magazineCharCount[i]-- == 0) return false;

        return true;

    }
};