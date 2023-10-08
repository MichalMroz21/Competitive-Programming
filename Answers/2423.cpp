class Solution {
public:
    bool equalFrequency(string word) {
        
        unordered_map<char, int> charCount{};
        unordered_map<int, int> frequencyLetterCount{};

        pair<int, char> highestFrequency{};

        int hashMapLength{};

        for(auto i : word){
            charCount[i]++;

            if(charCount[i] == 1) hashMapLength++;
            if(charCount[i] > highestFrequency.first) highestFrequency = make_pair(charCount[i], i);    
        }

        if(hashMapLength == 1) return true;
        if(highestFrequency.first == 1) return true;

        for(auto [key, value] : charCount) frequencyLetterCount[value]++;

        if(frequencyLetterCount[1] == 1 && frequencyLetterCount[highestFrequency.first] == hashMapLength - 1) return true;

        for(auto [key, value] : charCount){

            if(key == highestFrequency.second) continue;
            if(value != highestFrequency.first - 1) return false;

        }

        return true;
     
    }
};