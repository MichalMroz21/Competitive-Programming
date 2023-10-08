class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> twoMax(2, 0);

        for(auto i : nums){
            if(i > twoMax[0]) twoMax[1] = twoMax[0], twoMax[0] = i;
            else if(i > twoMax[1]) twoMax[1] = i;
        }

        return (twoMax[0] - 1) * (twoMax[1] - 1);
    }
};