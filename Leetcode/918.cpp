class Solution {
public:

    int maxSubarraySumCircular(vector<int>& nums) {
        
       int n = nums.size();
       int prevMax = 0;
       int prevMin = 0;
       int total = 0;

       int globalMax = nums[0];
       int globalMin = nums[0];

       for(int i=0; i<n; i++){

           int k = nums[i];
           total += k;

           prevMax = max(prevMax + k, k);
           prevMin = min(prevMin + k, k);

           globalMax = max(globalMax, prevMax);
           globalMin = min(globalMin, prevMin);

       } 

       return globalMax > 0 ? max(globalMax, total - globalMin) : globalMax;

    }
};