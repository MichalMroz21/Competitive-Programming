class Solution {
public:
    int captureForts(vector<int>& forts) {
        
        int prev{}, currForts{}, maxForts{};

        for(auto i : forts){

            if(i != 0) {
                if(i + prev == 0){
                    maxForts = max(maxForts, currForts);
                }
                prev = i;
                currForts = 0;
            }
            else currForts++;

        }

        return maxForts;
    }
};