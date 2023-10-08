class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int n = nums.size(), answer{};

        for(int i = 0; i < n; i++){

            int L = i, R = n - 1;

            int limit = target - nums[i];

            while(L < R){

                int m = (R - L)/2 + L;

                if(nums[m] >= limit) R = m;
                else L = m + 1;

            }

            if(nums[R] < limit) R = n;

            if(R - i != 0){
                answer += R - i - 1;
            }

        }

        return answer;
    }
};
