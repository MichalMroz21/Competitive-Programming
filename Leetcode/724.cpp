class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sumRight = accumulate(nums.begin(), nums.end(), 0);
        int sumLeft{};
        int n = nums.size();

        for(int i = 0; i < n; i++){

            sumRight -= nums[i];

            if(sumRight == sumLeft) return i;

            sumLeft += nums[i];

        }

        return -1;
    }
};