class Solution {
public:
    int maxOperations(vector<int>& nums) {
        
        int ans{}, prevSum{-1};

        for(int i = 1; i < nums.size(); i += 2){

            int currSum = nums[i - 1] + nums[i];

            if(prevSum != -1 && prevSum != currSum)
                break;

            prevSum = currSum;
            ans++;
        }

        return ans;
    }
};