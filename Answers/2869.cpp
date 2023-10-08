class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int op{}, cnt{k}, n = nums.size();

        array<bool, 51> wasBefore{};

        for(int i = n - 1; i >= 0; i--){

            if(nums[i] <= k && wasBefore[nums[i]] == false){
                cnt--;
                wasBefore[nums[i]] = true;
            }

            op++;

            if(cnt == 0) break;
        }

        return op;
    }
};