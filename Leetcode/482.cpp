class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
        string ans{};

        int cnt{};

        for(int i = s.size() - 1; i >= 0; i--){
            
            if(s[i] != '-'){
                ans += toupper(s[i]);
                cnt++;
            } 
            if(cnt == k){
                ans += '-';
                cnt = 0;
            }

        }

        if(ans.size() != 0 && ans.back() == '-') ans.pop_back();

        return string(ans.rbegin(), ans.rend());
    }
};