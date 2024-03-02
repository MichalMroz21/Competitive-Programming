class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int currAltitude{};
        int maxAltitude{};

        for(int& netGain : gain){

            currAltitude += netGain;
            maxAltitude = max(maxAltitude, currAltitude);

        }

        return maxAltitude;
    }
};