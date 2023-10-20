class Solution {
public:
    bool isDecimal(string& s, int start, int n){

        int dotCnt{};

        if(n - start == 1 && (s[start] == '.' || s[start] == '+' || s[start] == '-')) return false;

        for(int i = start; i < n; i++){
            if(i == 0 && (s[i] == '+' || s[i] == '-')) continue;
            else if(s[i] == '.'){
                dotCnt++;
                if(dotCnt == 2) return false;
                if(i == 0 || isdigit(s[i - 1])) continue;
                if(i + 1 == n) return false;
            }
            else if(!isdigit(s[i])) return false;
        }

        return true;
    }

    bool isInteger(string& s, int start, int n){

        if(n - start == 1 && (s[start] == '+' || s[start] == '-')) return false;

        for(int i = start; i < n; i++){
            if(i == start && (s[i] == '+' || s[i] == '-')) continue;
            if(!isdigit(s[i])) return false;
        }

        return true;
    }

    bool isNumber(string s) {
        
        int eCnt{}, ePos{};

        if(s.empty() || s[0] == 'e' || s[0] == 'E' || s.back() == 'e' || s.back() == 'E') return false;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'e' || s[i] == 'E'){
                eCnt++;
                ePos = i;
            }
        }

        if(eCnt == 0){
            return isDecimal(s, 0, s.size()) || isInteger(s, 0, s.size());
        }

        else if(eCnt == 1){
            return (isDecimal(s, 0, ePos) || isInteger(s, 0, ePos)) && (isInteger(s, ePos + 1, s.size()));
        }

        else return false;
    }
};