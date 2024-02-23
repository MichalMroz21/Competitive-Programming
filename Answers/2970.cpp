class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        
        int L{-1}, R{-1};

        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] >= nums[i]){
                if(L == -1) L = i - 1;
                R = i;
            }
        }

        if(L == -1 && R == -1){
            return ( nums.size() * (nums.size() + 1) )/2;
        }
        else if(L == R){
            int onLeft = L, onRight = nums.size() - (R + 1);
            return onLeft * onRight + 1;
        }
        else{
            int onLeft = L, onRight = nums.size() - (R + 1);
            return onLeft * onRight + 2 * onLeft + 2 * onRight + 3;
        }

    }
};