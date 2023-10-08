class Solution {
public:

    bool isPalindromic(string& s){
        int i{}, j = s.size() - 1;

        while(i < j){
            if(s[i++] != s[j--]) 
                return false;
        }

        return true;
    }

    int removePalindromeSub(string s) {
        return isPalindromic(s) ? 1 : 2;
    }
};