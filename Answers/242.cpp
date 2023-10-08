class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        int m = t.size();

        if(n != m) return false;

        unordered_map<char, int> letterCount{};

        for(auto i : s) letterCount[i]++;
        for(auto i : t) letterCount[i]--;

        for(auto [key, value] : letterCount){

            if(value != 0) return false;

        }

        return true;

    }
};