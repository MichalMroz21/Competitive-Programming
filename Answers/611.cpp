class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int result{};

        for(int i = n - 1; i >= 2; i--){

            int curr = nums[i];
            int j = i - 1;

            while(j >= 1){
           
                int currPrev = nums[j];
                int searchNumber = curr - currPrev;
                
                int L = 0;
                int R = j - 1;

                while(L < R){

                    int m = L + (R - L)/2;
                    int k = nums[m];

                    if(k <= searchNumber) L = m + 1; 
                    else R = m;
                }

                if(nums[R] > searchNumber){
                    result += (j - 1) - R + 1;
                }

                j--;
            }

        }

        return result;
    }
};