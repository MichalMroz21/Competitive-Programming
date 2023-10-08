class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int maxDistance = 1;

        for(int i=0; i<n - 1; i++){
            if((i < maxDistance)) maxDistance = max(maxDistance, i + nums[i] + 1);
        }

        return maxDistance >= n;

    }
};