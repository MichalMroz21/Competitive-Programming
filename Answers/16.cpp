class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum{};
        int minDiff = abs(nums[n - 1] + nums[n - 2] + nums[n - 3]  - target);

        for(int k=0; k<n; k++){

            int a = nums[k];
            int curr = target - a;

            int i = 0;
            int j = n - 1;

            while(i < j){

                if(i == k) {i++; continue;}
                if(j == k) {j--; continue;}

                int left = nums[i];
                int right = nums[j];

                int diff = left + right - curr;

                if(abs(diff) <= minDiff){
                    sum = left + right + a;
                    minDiff = abs(diff);
                }

                if(diff > 0) j--;
                else if(diff < 0) i++;
                else return sum;
            }
        }

        return sum;
    }
};