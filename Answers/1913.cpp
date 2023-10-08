class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        vector<int> twoMax(2, 0), twoMin(2, INT_MAX);

        for(const auto& i : nums){
            if(i > twoMax[0]) twoMax[1] = twoMax[0], twoMax[0] = i;
            else if(i > twoMax[1]) twoMax[1] = i;

            if(i < twoMin[0]) twoMin[1] = twoMin[0], twoMin[0] = i;
            else if(i < twoMin[1]) twoMin[1] = i;
        }

        return twoMax[0] * twoMax[1] - twoMin[0] * twoMin[1];
    }
};