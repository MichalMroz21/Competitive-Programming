class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a{nums[0]}, b{nums[1]};

        for(int i = 2; i < nums.size(); i++){
            if(a.back() > b.back()) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }

        for(auto i : b) a.push_back(i);
        return a;
    }
};