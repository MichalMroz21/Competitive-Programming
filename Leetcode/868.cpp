class Solution {
public:
    int binaryGap(int n) {

        int maxDist{}, currDist{};
        bool pathingStarted = false;

        while(n){

            int curr = n & 1;

            if(curr == 1){
                if(pathingStarted) maxDist = max(maxDist, currDist);
                pathingStarted = true;
                currDist = 0;
            }

            n >>= 1;
            currDist++;
        }

        return maxDist;
    }
};