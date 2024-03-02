class Solution {
public:

    int signFunc(int x){

        return x > 0 ? 1 : x < 0 ? -1 : 0;

    }

    int arraySign(vector<int>& nums) {
        
        int product{1};
        for(auto i : nums){

            if(i < 0) product *= -1;
            else if(i == 0) return 0;

        }

        return signFunc(product);

    }
};