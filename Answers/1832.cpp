class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26) return false;

        vector<int> letterExists(26, 0);

        for(auto i : sentence) letterExists[i - 'a'] = 1;

        return std::accumulate(letterExists.begin(), letterExists.end(), 0) == 26;
    }
};