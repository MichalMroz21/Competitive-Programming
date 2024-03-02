class Solution {
public:
    int differenceOfSums(int n, int m) {
        //Sn = (a1 + an) / 2.0 * n
        //an = a1 + (n - 1) * r

        return ((1 + n) / 2.0 * n) - ( (m + m + (n/m - 1) * m) / 2.0 * (n/m) ) * 2; 
    }
};