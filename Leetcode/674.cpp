class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int prev{INT_MIN}, cnt{}, maxSub{};

        for(auto i : nums){
          if(prev == INT_MIN) cnt++;
          else if(prev < i){
            cnt++;
          }
          else{
            cnt = 1;
          }

          maxSub = max(maxSub, cnt);
          prev = i;
        }

        return maxSub;
    }
};