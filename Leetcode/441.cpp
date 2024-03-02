class Solution {
public:
    int arrangeCoins(int n) {
        
        int L = 0;
        int R = n;

        while(L < R){

            int k = L + (R - L)/2;
                                                                                                            
            if((1.0 + k)/2.0 * k > numeric_limits<int>::max()) {R = k; continue;}
            int sum = (1.0 + k)/2.0 * k;

            if(n <= sum) R = k;
            else L = k + 1;

        }

        if((1.0 + R)/2.0 * R == n) return R;
        return R - 1;

    }
};