class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int ans{}, prev{-1}, n = nums.size(), i{};

        while(i < n){

            int j{i + 1};

            while(j < n && nums[j] == nums[i]) {j++;}

            if(prev != -1 && j < n && (nums[i] > prev && nums[i] > nums[j] || nums[i] < prev && nums[i] < nums[j]) ){
                ans++;
            }

            prev = nums[i];
            i = j;
        }

        return ans;
    }
};