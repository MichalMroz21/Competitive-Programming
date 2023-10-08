class Solution {
public:

    bool cntDeal(int& cnt, int& sub2){
        if(cnt == 1) return false;
        if(cnt == 2 && sub2 == 1) return false;
        if(cnt == 2) sub2++;
        if(cnt > 3){
            if(cnt % 3 != 0){
                if(sub2 == 1) return false;
                sub2++;
                cnt -= 2;
                if(!(cnt % 3 == 0)) return false;
            }
        }

        cnt = 1;
        return true;
    }

    bool isDecomposable(string s) {
        
        int cnt{1}, sub2{};

        for(int i = 1; i < s.size(); i++){
            if(s[i] != s[i - 1]){
                if(cntDeal(cnt, sub2) == false) return false;
            }
            else cnt++;
        }

        if(cntDeal(cnt, sub2) == false) return false;

        return sub2 == 1;
    }
};