class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() <= 2) return -1;

        vector<int> temp{nums[0], nums[1], nums[2]}; //O(1) space
        sort(temp.begin(), temp.end()); //O(1) time complex. (better than doing a lot of if statements)
        return temp[1];
    }
};