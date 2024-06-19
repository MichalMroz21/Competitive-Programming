class Solution {
public:
    string clearDigits(string s) {
        string ret{};

        int numCnt{};

        for(int i = s.size() - 1; i >= 0; i--){

            if(std::isdigit(s[i])){
                numCnt++;
            }
            else{
                if(numCnt) numCnt--;
                else ret.push_back(s[i]);
            }

        }

        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};