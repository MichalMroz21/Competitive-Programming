class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n == 0) return 1; //cant get log2 of n = 0.

        return n ^ ( (1 << (int)log2(n) + 1) - 1);
        //needs long long if int can be near INT_MAX.

    }
};