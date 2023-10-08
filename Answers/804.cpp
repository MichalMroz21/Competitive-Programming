class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morseCodes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string, bool> morseMap{};

        for(auto& word : words){
            string temp{};
            for(auto ch : word) temp += morseCodes[ch - 'a']; 
            morseMap[temp] = true;
        }

        return morseMap.size();
    }
};