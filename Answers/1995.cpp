class Solution {
public:
    int countQuadruplets(vector<int>& nums) {

        unordered_map<int, int> exists{};

        int ans{}, n = nums.size();

        for(int i = n - 2; i >= 0; i--){

            exists[nums[i + 1]]++;

            for(int j = i - 1; j >= 0; j--){
                for(int k = j - 1; k >= 0; k--){
                    ans += exists[nums[i] + nums[j] + nums[k]];
                }
            }
        }

        return ans;
    }
};