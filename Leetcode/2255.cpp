class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string, bool> prefixMap{};
        string temp{};

        for(auto i : s) {
            temp += i;
            prefixMap[temp] = true;
        } 

        int answer{};
        for(auto& word : words) answer += prefixMap[word];
        return answer;
    }
};