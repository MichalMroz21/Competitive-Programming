class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        vector<int> ans{};

        int high{-1}, n = nums.size();

        for(int i = 0; i < n; i++){

            if(nums[i] == key){

                for(int j = max(high + 1, i - k); j <= i + k && j < n; j++){
                    ans.push_back(j);
                }

                high = i + k;
                if(high >= n) break;
            }

        }

        return ans;
    }
};