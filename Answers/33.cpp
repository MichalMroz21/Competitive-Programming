class Solution {
public:

    int binarySearch(vector<int>& nums, int L, int R, int target){

        while(L <= R){

            int m = L + (R - L)/2;
            int k = nums[m];

            if(k == target) return m;
            if(k < target) L = m + 1;
            else R = m - 1;

        }

        return -1;

    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int L = 0;
        int R = n - 1;

        while(L < R){

            int m = L + (R - L)/2;
            int k = nums[m];

            if(k <= nums[R]) R = m;
            else L = m + 1;

        }

        int res = binarySearch(nums, R, n - 1, target);
        if(res != -1) return res;
        int res2 = binarySearch(nums, 0, R - 1, target);
        return res2;


    }
};