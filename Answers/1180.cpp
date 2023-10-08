class Solution {
public:
    int countLetters(string s) {
        
        int ans{}, cnt{1}, n = s.size();

        for(int i = 1; i < n; i++){

            if(s[i - 1] != s[i] || i == n - 1){

                if(i == n - 1){
                    if(s[i - 1] == s[i]) cnt++;
                    else ans++;
                }

                ans += (1 + cnt) / 2.0 * cnt; 
                cnt = 1;
            }

            else cnt++;
        }

        return ans;
    }
};