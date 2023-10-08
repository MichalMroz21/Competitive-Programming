class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 0) return {};

        vector<int> result(n), leftProducts(n), rightProducts(n);

        int leftProduct = nums[0];
        leftProducts[0] = leftProduct;

        for(int i = 1; i < n; i++){

            leftProduct *= nums[i];
            leftProducts[i] = leftProduct;

        }

        int rightProduct = nums[n - 1];
        rightProducts[n - 1] = rightProduct;

        for(int i = n - 2; i >= 0; i--){

            rightProduct *= nums[i];
            rightProducts[i] = rightProduct;

        }

        for(int i = 0; i < n; i++){

            int left = (i == 0 ? 1 : leftProducts[i - 1]);
            int right = (i == n - 1 ? 1 : rightProducts[i + 1]);

            result[i] = left * right;

        }

        return result;
    }
};