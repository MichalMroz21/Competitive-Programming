class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        unordered_map<char, int> countMap{};

        int diffCount{};

        string ret{};

        for(auto& i : licensePlate) {
            if(isalpha(i)) {
                if(++countMap[tolower(i)] == 1){ 
                    diffCount++;
                }
            }
        }

        for(auto& word : words){

            if(!ret.empty() && word.size() >= ret.size()) continue;

            unordered_map<char, int> temp{};

            int diffCnt{};

            for(auto i : word){

                if(isalpha(i)) {
                    if(++temp[tolower(i)] == countMap[tolower(i)]){ 
                        diffCnt++;
                    }
                }

            }

            if(diffCnt == diffCount) ret = word;
        }

        return ret;
    }
};