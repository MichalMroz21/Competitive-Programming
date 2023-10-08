class Solution {
public:
    bool areOccurrencesEqual(string s) {
        if(s.empty()) return true;
        unordered_map<char, int> mp{};
        for(auto i : s) mp[i]++;

        int base = mp[s[0]];
        for(auto [key, value] : mp) if(value != base) return false;
        return true;   
    }
};