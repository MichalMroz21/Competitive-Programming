class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
        int L=0; 
        int R = nums.size() - 1;

        if (nums[0]!= nums[1]) return nums[0];
 
        if (nums[R]!= nums[R - 1]) return nums[R];

        while(L <= R){

            int m = L + (R - L)/2;
            int n = R - L  + 1;
            int k = nums[m];

            if(n == 1) return k;

            int lowerM = nums[m - 1];
            int higherM = nums[m + 1];

            if (k != lowerM && k != higherM)
                return k;

            if(m % 2){

                if(k != lowerM) R = m - 1;
                else L = m + 1;

            }

            else{
                if(k != higherM) R = m - 1;
                else L = m + 1;
            }

            

        }

        return -1;
    }
};