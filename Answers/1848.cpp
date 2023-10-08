class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        int minDist{INT_MAX};

        for(int i = start; i < nums.size(); i++){

            if(nums[i] == target){
                minDist = i - start;
                break;
            }

        }

        for(int i = start; i >= 0; i--){

            if(nums[i] == target){
                minDist = min(minDist, start - i);
                break;
            }

        }

        return minDist;
    }
};