class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        if(s.empty()) return false;
        if(s.size() == 1) return false;
        
        int n = s.size();
        int k = n / 2;

        while(k != 0){
            
            if(n % k == 0) {
        
                bool everyEqual = true;
                string prev = s.substr(0, k);

                for(int i = k; i < n; i += k){

                    string curr = s.substr(i, k);
                    
                    if(prev != curr) break;
                    if(i + k >= n) return true;

                    prev = curr;   
                }
            }

            k--;
        }

        return false;
    }
};