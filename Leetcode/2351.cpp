class Solution {
public:
    char repeatedCharacter(string s) {
        
        vector<int> map(26,0);

        for(auto i : s){
            if(map[i - 'a']++ == 1) return i;
        }

        return '\0';

    }
};