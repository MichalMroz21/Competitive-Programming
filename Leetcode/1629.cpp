class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {

        int prev{}, longestRelease{};
        char longestReleased{};

        for(int i = 0; i < releaseTimes.size(); i++){

            int release = releaseTimes[i] - prev;

            if(release >= longestRelease){

                if(release == longestRelease){
                    longestReleased = max(keysPressed[i], longestReleased);
                }
                    
                else longestReleased = keysPressed[i];

                longestRelease = release;
            }

            prev = releaseTimes[i];
        }

        return longestReleased;

    }
};