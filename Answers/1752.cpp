class Solution {
public:
    bool check(vector<int>& nums) {
        
        int cnt{}, n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i - 1 == -1 ? n - 1 : i - 1] > nums[i]) 
                cnt++;
        }

        return cnt <= 1;
    }
};