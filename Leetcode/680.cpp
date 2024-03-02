class Solution {
public:

    bool isPalindrome(string& s, int i, int j){

        while(i < j){
            if(s[i++] != s[j--]) return false;
        }

        return true;
    }


    //acdcea

    bool validPalindrome(string s) {
        int i{}, j = s.size() - 1;

        while(i < j){
            if(s[i] != s[j]){
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
            i++;
            j--;
        }

        return true;
    }
};