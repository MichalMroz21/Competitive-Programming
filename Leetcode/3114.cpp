class Solution {
public:
    string findLatestTime(string s) {
        
        if(s[4] == '?') s[4] = '9';
        if(s[3] == '?') s[3] = '5';

        if(s[0] == '?' && s[1] == '?'){
            s[0] = s[1] = '1';
        }

        else if(s[0] == '?'){
            s[0] = '0' + (s[1] <= '1');
        }

        else if(s[1] == '?'){   
            s[1] = '1' + 8 * (s[0] != '1');
        }

        return s;
    }
};