class Solution {
public:
    string reformat(string s) {
        int n = s.size();

        string ret(n, ' ');

        int digits{}, chars{};

        for(auto i : s){
            digits += isdigit(i);
            chars += !isdigit(i);
        }

        if(abs(digits - chars) > 1) return "";

        int digitIndex = 1, charIndex = 0;
        
        if(digits > chars) swap(digitIndex, charIndex);

        for(auto i : s){

            if(isdigit(i)){
                ret[digitIndex] = i;
                digitIndex += 2;
            }   
            else{
                ret[charIndex] = i;
                charIndex += 2;
            }

        }

        return ret;
    }
};