class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        int ans{};

        while(mainTank > 0){

            if(mainTank > 5) ans += 10 * 5;
            else ans += mainTank * 10;

            mainTank -= 5;
            if(additionalTank > 0) mainTank++;
            additionalTank--;

        }

        return ans;
    }
};