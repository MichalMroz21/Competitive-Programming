class Solution {
public:
    int countKeyChanges(string s) {
        
        int ans{};

        for(int i = 1; i < s.size(); i++){
            if(toupper(s[i - 1]) != toupper(s[i])) ans++;
        }

        return ans;
    }
};