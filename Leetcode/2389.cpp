class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(), nums.end());

        int prev = nums[0], m = queries.size(), n = nums.size();

        for(int i = 1; i < n; i++){
            nums[i] += prev;
            prev = nums[i];
        }

        vector<int> answer(m);

        for(int i = 0; i < m; i++){

            int maxSum = queries[i], L{}, R{n - 1}, maxSumIndex{-1};

            while(L + 1 < R){

                int m = (R - L)/2 + L;

                if(nums[m] > maxSum) R = m - 1;
                else L = m;

            }

            if(nums[L] <= maxSum) maxSumIndex = L;
            if(nums[R] <= maxSum) maxSumIndex = R;

            answer[i] = maxSumIndex + 1;
        }

        return answer;
    }
};