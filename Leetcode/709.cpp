class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i=0; i<s.size(); i++){

            char a = s[i];

            if(a >= 'A' && a <= 'Z') s[i] = s[i] - 'A' + 'a';

        }

        return s;

    }
};