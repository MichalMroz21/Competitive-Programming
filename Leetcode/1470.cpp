class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> arr{};

        int i = n;

        while(i < 2 * n){
            arr.push_back(nums[i - n]);
            arr.push_back(nums[i++]);
        }

        return arr;

    }
};