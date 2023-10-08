class Solution {
public:

    bool isVowel(char ch){
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string reverseVowels(string s) {
        
        int i = 0, j = s.size() - 1;

        while(i < j){

            if(isVowel(s[i]) && isVowel(s[j])) swap(s[i++], s[j--]);
            if(!isVowel(s[i])) i++;
            if(!isVowel(s[j])) j--;

        }

        return s;
    }
};