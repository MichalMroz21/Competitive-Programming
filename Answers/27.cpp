class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int new_arr{};
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[new_arr++] = nums[i];
            }
        }

        return new_arr;

    }
};