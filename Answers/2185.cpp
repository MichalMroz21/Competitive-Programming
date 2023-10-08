class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        const int prefSize = pref.size();
        int answer{};

        for(const auto& word : words){

            if(word.substr(0, prefSize) == pref) answer++;

        }

        return answer;

    }
};