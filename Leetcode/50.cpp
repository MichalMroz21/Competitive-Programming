class Solution {
public:
    double recursivePow(double x, int n){

        if(n == 0) return 1;
        if(n == 1) return x;
        double res = recursivePow(x, n/2);
        return n % 2 ? res * res * x : res * res;

    }

    double myPow(double x, int n) {
        
        double res = recursivePow(x, abs(n/2));
        res *= n % 2 ? res * x : res;
        if(n < 0) return 1/res;
        else return res;

    }
};