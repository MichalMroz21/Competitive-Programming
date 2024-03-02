class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        for(int i = 0, j = -1; i < nums.size(); i++){

            if(nums[i] == 1){      
                if(i - j - 1 < k && j != -1) return false; 
                j = i;
            }

        }

        return true;
    }
};