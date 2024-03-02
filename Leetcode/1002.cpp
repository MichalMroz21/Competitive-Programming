class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        if(words.empty()) return {};

        unordered_map<char, int> charCount{};
        unordered_map<char, int> charCountSecond{};

        const size_t wordsSize{words.size()};

        for(const char& ch : words[0]){  
            charCount[ch]++; 
        }

        for(size_t j {1}; j < wordsSize; ++j){
           
            for(char& i : words[j]){
                charCountSecond[i]++;
            }

            for(auto& [key, value] : charCount){
                value = min(value, charCountSecond[key]);
                charCountSecond[key] = 0;
            }

        }

        vector<string> ret{};

        for(auto& [key, value] : charCount){

            while(value-- > 0) ret.push_back(string{key});
            
        }

        return ret;
    }
};