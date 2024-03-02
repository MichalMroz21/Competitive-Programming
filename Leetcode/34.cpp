class Solution {
public:

    int binarySearch(vector<int>& nums, int target, bool bias){

        int L = 0;
        int R = nums.size() - 1;

         while(L + 1 < R){

            int m = L + (R - L)/2;
            int k = nums[m];

            if(k == target){

                if(bias == true) L = m; //true = Right
                else R = m;
                
            }

            else if(k < target) L = m;
            else R = m;

        }

        if(nums[L] == target && bias == false){
            return L;
        }

        if(nums[R] == target && bias == true){
            return R;
        }
        
        else if(nums[R] == target) return R;
        else if(nums[L] == target) return L;
        else return -1;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        if(n == 0) return vector<int>{-1, -1};

        return vector<int>{binarySearch(nums, target, false), binarySearch(nums, target, true)};

    }
};