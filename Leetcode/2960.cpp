class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        
        int ans{}, decreases{}, n = batteryPercentages.size();

        for(auto i : batteryPercentages){
            if(i - decreases > 0){
                ans++;
                decreases++;
            }
        }

        return ans;
    }
};