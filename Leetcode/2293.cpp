class Solution {
public:

    int minMaxGame(vector<int>& nums) {

        int cnt{}, n = nums.size();

        while(true){

            cnt = 0;
            if(n == 1) return nums[0];

            for(int i = 0; i < n - 1; i += 2){
                if(cnt % 2 == 0) nums[cnt] = min(nums[i], nums[i + 1]);
                else nums[cnt] = max(nums[i], nums[i + 1]);

                cnt++;
            }

            n /= 2;
        }
        
        return 0;
    }
};