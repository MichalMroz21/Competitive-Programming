class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int consecutive{};

        for(const int& i : arr){

            ++consecutive *= i & 1;
            if(consecutive == 3) return true; 
        }

        return false;

    }
};