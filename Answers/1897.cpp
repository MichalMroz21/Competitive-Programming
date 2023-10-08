class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        unordered_map<char, int> countMap{};

        int n = words.size();

        for(auto& word : words) for(auto& i : word) countMap[i]++;

        for(auto [key, value] : countMap) if(value % n) return false;

        return true;
    }
};