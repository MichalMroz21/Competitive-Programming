class Solution {
public:
    string reverseWords(string s) {
        
        string ret{};
        int n = s.size();

        for(int i = n - 1; i >= 0; i--){

            if(s[i] == ' ' || i == 0){

                int j = i + (s[i] == ' '), jPrev = j;

                while(j != n && s[j] != ' '){

                    ret.push_back(s[j]);
                    j++;
                }

                if(j != jPrev) ret.push_back(' ');

            }

        }

        if(ret.back() == ' ') ret.pop_back();
        return ret;
    }
};