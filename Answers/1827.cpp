class Solution {
public:
    int minOperations(vector<int>& nums) {

        int firstElem = nums[0], answer{}, n = nums.size();

        if(n == 1) return 0;

        for(int i = 1; i < n; i++){

            if(nums[i] <= firstElem) {
                firstElem++;
                answer += firstElem - nums[i];
            }
            else firstElem = nums[i];
            
        }

        return answer;
    }
};