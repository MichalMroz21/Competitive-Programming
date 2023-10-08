class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {

        int start{INT_MAX}, end{INT_MIN}, ans{}, sum{};

        for(auto& coords : nums){
            start = min(start, coords[0]);
            end = max(end, coords[1]);
        }

        vector<int> parking(end + 2);

        for(auto& coords : nums){
            parking[coords[0]]++;
            parking[coords[1] + 1]--;
        }

        for(int i = start; i <= end; i++){
            sum += parking[i];
            if(sum) ans++;
        }

        return ans;
    }
};