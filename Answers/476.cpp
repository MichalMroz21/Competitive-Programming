class Solution {
public:
    int findComplement(int num) {
        
        if(num == 0) return 1; //cant get log2 of num = 0.

        return num ^ ( (long long)(1 << (int)log2(num) + 1) - 1);
        //needs long long if int can be near INT_MAX.
    }
};