class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans{};

        int i{};

        for(auto& word : words){
            if(word.find(x) != -1) ans.push_back(i);
            i++;
        }

        return ans;
    }
};