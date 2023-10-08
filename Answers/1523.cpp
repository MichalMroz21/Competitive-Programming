class Solution {
public:
    int countOdds(int low, int high) {
        
        if(low == 0 && high == 0) return 0;
        return (high - 1)/2 - (low/2 - 1);


    }
};