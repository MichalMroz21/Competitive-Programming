class Solution {
public:
    bool checkRecord(string s) {
        
        int countA{}, consecutiveL{};

        for(const auto& i : s){
            
            countA += (i == 'A');

            if(countA == 2) return false;

            if(i != 'L') consecutiveL = 0;
            else consecutiveL++;

            if(consecutiveL == 3) return false;
        }

        return true;
    }
};