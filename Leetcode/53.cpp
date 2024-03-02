class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();

        int prev = nums[0];
        int maxN{prev};

        if(n == 1) return prev;

        for(int i=1; i<n; i++){

            int k = nums[i];

            if(prev < 0){
                prev = k;
            }

            else{
                prev = k + prev;
            }

            maxN = max(maxN, prev);

        }

        return maxN;

    }
};