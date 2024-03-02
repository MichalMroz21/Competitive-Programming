class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i{}, n = s.size(), j{n - 1};

        while(i < j){

            if(s[i] != s[j]) s[i] = s[j] = s[i] < s[j] ? s[i] : s[j];
            
            i++;
            j--;
        }

        return s;
    }
};