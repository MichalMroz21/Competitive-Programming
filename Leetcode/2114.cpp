class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxN{};

        for(auto& sentence : sentences){

            maxN = max(maxN, static_cast<int>( count_if(sentence.begin(), sentence.end(), [](char a){return a == ' ';}) + 1 ) );

        }

        return maxN;

    }
};