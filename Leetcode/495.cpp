class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int left{-1}, right{-1}, ans{};

        for(auto i : timeSeries){

            int newLeft = i, newRight = i + duration - 1;

            ans += (newRight - newLeft + 1);

            if(newLeft <= right) ans -= (right - newLeft + 1);
            
            left = newLeft;
            right = newRight;

        }

        return ans;
    }
};