class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
       vector<int> lis{};

       lis.push_back(nums[0]);

       for(int i = 1; i < nums.size(); i++){

           if(nums[i] > lis.back()) lis.push_back(nums[i]);

           else{

               int L = 0;
               int R = lis.size() - 1;

               while(L < R){

                   int m = L + (R - L)/2;

                   if(lis[m] >= nums[i]) R = m;
                   else L = m + 1;

               }

              lis[R] = nums[i];

           }

       }

       return lis.size() > 2;
    }

};
