class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        unordered_map<char, bool> brokenLettersMap{};

        for(const char& ch : brokenLetters){
            brokenLettersMap[ch] = true;
        }

        const size_t textSize = text.size();

        size_t i{};

        int result{};

        while(i != textSize){

            size_t prevI{i};
            
            i = text.find(' ', i + 1);

            if(i == string::npos) i = textSize;

            string curr = string(text.begin() + prevI, text.begin() + i);

            bool add{1};

            for(const char& ch : curr){

                if(brokenLettersMap[ch]) {
                    add = 0;
                    break;
                } 

            }

            result += add;

        }

        return result;

    }
};