class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        for(auto& p : paragraph) if(ispunct(p)) p = ' ';

        stringstream words(paragraph);

        unordered_map<string, int> freqMap{}, bannedMap{};

        for(auto& ban : banned) bannedMap[ban] = 1;

        string word{}, maxWord{};
        int maxCnt{};

        while(words >> word){

            transform(word.begin(), word.end(), word.begin(), [](char a){return tolower(a);});

            if(bannedMap[word]) continue;
            
            freqMap[word]++;

            if(freqMap[word] > maxCnt){
                maxCnt = freqMap[word];
                maxWord = word;
            }

        }

        return maxWord;
    }
};