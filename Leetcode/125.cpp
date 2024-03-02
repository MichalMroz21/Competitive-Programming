class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0;
        int j = s.size() - 1;

        while(i < j){

            if(!isalpha(s[i]) && !isdigit(s[i])) {i++; continue;}
            if(!isalpha(s[j]) && !isdigit(s[j])) {j--; continue;}

            char a = s[i];
            char b = s[j];

            if(tolower(a) != tolower(b)) return false;

            i++;
            j--;
        }
        return true;
    }
};