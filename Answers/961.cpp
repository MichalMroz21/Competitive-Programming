class Solution {
public:

    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n - 3; i += 4){
            for(int k = 1; k < 4; k++){
                int c = 0;
                while(++c <= k){
                    if(nums[i + 4 - k - 1] == nums[i + c + 4 - k - 1]) 
                        return nums[i + 4 - k - 1];
                }
            }
        }

        return -1;
    }
};