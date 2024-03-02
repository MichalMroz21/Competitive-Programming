class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool isAllCapital = true, isAllLower = true;

        int n = word.size();
        
        if(n == 1) return true;

        for(int i = 1; i < n; i++){

            char currCharacter = word[i];

            if(islower(currCharacter)) isAllCapital = false;
            else isAllLower = false;

        }

        if(isAllLower == false && isAllCapital == false) return false;
        if(isAllCapital) return isupper(word[0]);

        return true;

    }
};