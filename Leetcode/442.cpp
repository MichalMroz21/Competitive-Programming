class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans{};

        for(auto i : nums){

            int ind = abs(i);

            if(nums[ind - 1] < 0){
                ans.push_back(ind);
            }
            else nums[ind - 1] *= -1;

        }

        return ans;
    }
};