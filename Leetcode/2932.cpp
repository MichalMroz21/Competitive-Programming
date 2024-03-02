class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size(), xorRes{};

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(abs(nums[i] - nums[j]) <= min(nums[i], nums[j])){
                    xorRes = max(xorRes, nums[i] ^ nums[j]);
                }
            }
        }

        return xorRes;
    }
};