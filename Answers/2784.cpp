class Solution {
public:
    bool isGood(vector<int>& nums) {   
        int maxCount{}, currMax{}, actualSum{}, n = nums.size();

        for(auto i : nums){

            actualSum += i;

            if(i > currMax){
                currMax = i;
                maxCount = 0;
            }

            if(i == currMax) maxCount++;
        }

        return actualSum == (2 * (n - 1) + (1 + n - 2)/2.0 * (n - 2)) && maxCount == 2 && currMax == n - 1;
    }
};