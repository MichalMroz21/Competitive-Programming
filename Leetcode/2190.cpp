class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        unordered_map<int, int> targetCount{};

        int maxCount{}, maxTarget{};

        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] == key){
                if(++targetCount[nums[i]] > maxCount){
                    maxCount = targetCount[nums[i]];
                    maxTarget = nums[i];
                }
            }
        }

        return maxTarget;
    }
};