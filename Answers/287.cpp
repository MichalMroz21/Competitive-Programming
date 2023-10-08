class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    
        int n = nums.size();

        int i = 0;
        int j = 0;

        while(true){

            i = nums[i];
            i = nums[i];

            j = nums[j];

            if(i == j){

                i = 0;
                while(true){
                    
                    i = nums[i];
                    j = nums[j];

                    if(i == j) return i;
                }

            }

        }

        return -1;
        

    }
};