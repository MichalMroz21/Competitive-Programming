class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
        int pos = nums[0] > 0 ? 1 : 0;
        int neg = nums[0] < 0 ? 1 : 0;

        int ret = pos;

        for(int i=1; i<nums.size(); i++){

            if(nums[i] > 0){

                pos++;
                neg = neg == 0 ? 0 : neg + 1;

            }

            else if(nums[i] == 0){
                pos = 0; neg = 0;
            }

            else{

                int temp = pos;
                pos = neg == 0 ? 0 : neg + 1;
                neg = temp + 1;

            }

            ret = max(ret, pos);

        }

        return ret;

    }
};