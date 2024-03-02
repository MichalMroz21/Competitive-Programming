class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        unordered_map<char, int> charsMap{};
        int sumLengths{};

        for(const auto& i : chars) charsMap[i]++;

        for(const auto& word : words){

            unordered_map<char, int> wordMap{};
            bool canBeFormed = true;

            for(const auto& ch : word){
                if(++wordMap[ch] > charsMap[ch]) {
                    canBeFormed = false;
                    break;
                }
            }

            if(canBeFormed) sumLengths += word.size();
        }

        return sumLengths;
    }
};