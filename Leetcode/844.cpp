class Solution {
public:
    bool backspaceCompare(string s, string t){
        
        int i = s.size() - 1, j = t.size() - 1, sCount{}, tCount{};

        while(true){

            while(i >= 0){
                if(s[i] != '#' && sCount == 0) break;
                else if(sCount > 0 && s[i] != '#') sCount--;
                else if(s[i] == '#') sCount++;
                i--;
            }
            while(j >= 0){
                if(t[j] != '#' && tCount == 0) break;
                else if(tCount > 0 && t[j] != '#') tCount--;
                else if(t[j] == '#') tCount++;
                j--;
            }

            if(i == -1 && j != -1) return false;
            if(i != -1 && j == -1) return false;

            if(i == -1 && j == -1) return true;
            if(s[i] != t[j]) return false;

            i--;
            j--;
        }

        return true;
    }
};