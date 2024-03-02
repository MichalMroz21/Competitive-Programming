class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0;
        int n = s.size();
        if(i == n) return true;

        for(int j = 0; j<t.size(); j++){

            if(t[j] == s[i]) i++;
            if(i == n) return true;
        }
        return false;
    }
};