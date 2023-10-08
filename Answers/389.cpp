class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ret = '\0';
        for(auto& i : s) ret ^= i;
        for(auto& i : t) ret ^= i;
    
        return ret;
    }
};