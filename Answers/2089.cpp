class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        int higherCount{}, lowerCount{}, lowerCountBefore{};

        for(auto i : nums) if(i < target) lowerCount++;

        vector<int> answer{};

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                answer.push_back(i - higherCount + (lowerCount - lowerCountBefore));
            }

            if(nums[i] > target) higherCount++;
            if(nums[i] < target) lowerCountBefore++;
        }

        return answer;

    }
};