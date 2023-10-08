class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> ans{}, sortedNums = nums;

        int n = nums.size();

        sort(sortedNums.begin(), sortedNums.end());

        for(auto i : nums){

           int L = 0, R = n - 1, m{}; 

           while(L < R){

               m = L + (R - L)/2;

               if(sortedNums[m] >= i) R = m;
               else L = m + 1;

           }

           ans.push_back(R);
        }

        return ans;

    }
};