class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        
        int breakCount{}, breakPoint{-1}, n = nums.size();

        for(int i = 1; i < n; i++){

            if(nums[i - 1] > nums[i] || (i == n - 1 && nums[i] > nums[0] && breakCount != 0)){
                breakCount++;
                if(breakCount == 2) return -1;
                breakPoint = i;
            }

        }

        if(breakPoint == -1) return 0;
        return n - breakPoint;
    }
};