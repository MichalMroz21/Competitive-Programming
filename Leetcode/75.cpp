class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        size_t n = nums.size();

        int zeroIndex{};
        int twoIndex = n - 1;
        int i{};

        while(i <= twoIndex){

            while(zeroIndex != n && nums[zeroIndex] == 0) {
                zeroIndex++;
                i = zeroIndex;
            }
            while(twoIndex != -1 && nums[twoIndex] == 2) twoIndex--;

            if(i == n) break;
            if(twoIndex == -1) break;
            if(i > twoIndex) break;

            if(nums[i] == 2){
                swap(nums[i], nums[twoIndex]);
                if(nums[i] == 0) swap(nums[i], nums[zeroIndex]);
            }

            else if(nums[i] == 0){
                swap(nums[i], nums[zeroIndex]);
                if(nums[i] == 2) swap(nums[i], nums[twoIndex]);
            }

            i++;

        }

    }
};