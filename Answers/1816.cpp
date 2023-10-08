class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int i{}, n = s.size();

        while(i < n){
            if(s[i] == ' ') {k--; if(!k) break;}
            i++;
        }

        return string(s.begin(), s.begin() + i);

    }
};