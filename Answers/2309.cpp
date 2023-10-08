class Solution {
public:
    string greatestLetter(string s) {
        
        unordered_map<int, bitset<2>> charMap{};

        int maxChar{};

        for(auto& i : s){
            charMap[tolower(i)][isupper(i) != 0] = 1;
            if(charMap[tolower(i)].count() == 2){
                maxChar = max(maxChar, toupper(i));
            } 
        }

        return string(1 - (maxChar == 0), maxChar);
    }
};