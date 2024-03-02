class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int numberOfFckUps{};

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] >= nums[i + 1]) {
                numberOfFckUps++;
                if(i == 0) continue;
                if(nums[i - 1] >= nums[i + 1]){
                    if(i == nums.size() - 2 || nums[i + 2] > nums[i]) continue;
                    return false;
                }
            }
        }

        return numberOfFckUps <= 1;
    }
};