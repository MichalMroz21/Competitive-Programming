class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int n = nums.size(), maxDist{};

        for(int i = 0; i < n; i++){

            if(nums[i] % 2 == 0 && nums[i] <= threshold){

                int j{i + 1};
                bool expected = 1;

                while(j < n){

                    if(nums[j] > threshold || nums[j] % 2 != expected){
                        break;
                    }

                    expected = !expected;
                    j++;
                }

                maxDist = max(maxDist, j - i);
                i = j - 1;
            }

        }

        return maxDist;
    }
};