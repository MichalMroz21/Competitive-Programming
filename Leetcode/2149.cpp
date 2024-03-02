class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int pos{}, neg{1}, n = nums.size();

        vector<int> ret(n, 0);

        for(auto i : nums){
            if(i < 0) {ret[neg] = i; neg += 2;}
            else {ret[pos] = i; pos += 2;}
        }

        return ret;
    }
};
