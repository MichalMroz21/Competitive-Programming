class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();
        int L{}, R{n - 1};

        while(L + 1 < R){

            int m = (R - L)/2 + L;

            if(nums[m] < 0) L = m;
            else R = m - 1;

        }

        int lastNegativeIndex{-1};

        if(nums[L] < 0) lastNegativeIndex = L;
        if(nums[R] < 0) lastNegativeIndex = R;

        L = 0;
        R = n - 1;

        while(L < R){

            int m = (R - L)/2 + L;

            if(nums[m] <= 0) L = m + 1;
            else R = m;

        }

        int firstPositiveIndex{n};

        if(nums[R] > 0) firstPositiveIndex = R;

        int amountOfNegatives = lastNegativeIndex + 1;
        int amountOfPositives = n - firstPositiveIndex;  

        return max(amountOfNegatives, amountOfPositives);
    }
};