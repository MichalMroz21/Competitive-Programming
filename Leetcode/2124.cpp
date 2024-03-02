class Solution {
public:
    bool checkString(string s) {
        
        bool metB = false;

        for(auto i : s){

            if(i == 'b') metB = true;
            if(i == 'a' && metB) return false;

        }

        return true;

    }
};