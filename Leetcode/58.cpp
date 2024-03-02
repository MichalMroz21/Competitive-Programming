class Solution {
public:
    int lengthOfLastWord(string s) {
    
        int beginning{-1};
        int end{};
        bool letterEncountered = false;

        for(int i = s.size() - 1; i >= 0; i--){
            
            if(isalpha(s[i]) && letterEncountered == false) {
                letterEncountered = true; 
                end = i;
            }

            if(s[i] == ' ' && letterEncountered) {
                beginning = i; 
                break;
            }
        }

        return end - beginning;

    }
};