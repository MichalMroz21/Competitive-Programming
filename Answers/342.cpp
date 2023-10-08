class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && 2147483648 % n == 0 && (n&0x55555555); 
    }
};