class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum{};
        int product{1};

        while(n != 0){
            
            int mod = n % 10;
            product *= mod;
            sum += mod;

            n /= 10;
        }

        return product - sum;

    }
};