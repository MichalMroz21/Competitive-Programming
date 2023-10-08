class Solution {
public:
    bool checkOnesSegment(string s) {
        
        bool afterFirstSeg = false;
        int prev{};

        for(int i = 0; i < s.size(); i++){

            if(prev == '1' && s[i] == '0') afterFirstSeg = true;
            if(afterFirstSeg == true && s[i] == '1') return false;

            prev = s[i];
        }

        return true;
    }
};