class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int answer{}, n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            if( !( n % (i + 1) ) ) 
                answer += nums[i] * nums[i];
        }

        return answer;

    }
};