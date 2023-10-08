class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxProduct{numeric_limits<int>::min()};
        pair<int, int>minmax{};
        minmax.first = nums[0];
        minmax.second = nums[0];
        maxProduct = max(maxProduct, max(minmax.first, minmax.second));

        for(int i=1; i<nums.size(); i++){

            int a = nums[i] * minmax.first;
            int b = nums[i] * minmax.second;

            minmax.first = max(max(a, b), nums[i]);
            minmax.second = min(min(a, b), nums[i]);

            maxProduct = max(maxProduct, max(minmax.first, minmax.second));

        }

        return maxProduct;
    }
};