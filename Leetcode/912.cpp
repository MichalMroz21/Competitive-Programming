class Solution {
public:

    int partition(vector<int>& nums, int L, int R){

        int pivot = nums[L];

        int l = L - 1;
        int r = R + 1;

        while(l < r){

            while(true){
                l++;
                if(nums[l] >= pivot) break;
            }

            while(true){
                r--;
                if(nums[r] <= pivot) break;
            }

            if(l < r) swap(nums[l], nums[r]);

        }

        return r;
    }

    int randomPartition(vector<int>& nums, int L, int R){

        int i = rand() % (R - L + 1) + L;
        swap(nums[L], nums[i]);
        return partition(nums, L, R);

    }

    void quickSort(vector<int>& nums, int L, int R){

        if(L < R){
            int q = randomPartition(nums, L, R);
            quickSort(nums, L, q);
            quickSort(nums, q+1, R);
        }
    }


    vector<int> sortArray(vector<int>& nums) {
        
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};