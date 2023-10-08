class Solution {
public:

    int sumEveryN(int r, int endRange){

        //Sn = (a1 + an)/2 * n
        int n = (endRange / r);
        return (r + r * n)/2.0 * n;
    }

    int sumOfMultiples(int n) {
        
        return sumEveryN(3, n) + sumEveryN(5, n) + sumEveryN(7, n) - sumEveryN(15, n) - sumEveryN(21, n) - sumEveryN(35, n) + sumEveryN(105, n);

    }
};