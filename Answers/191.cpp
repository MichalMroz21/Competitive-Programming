class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int ret{};

        while(n != 0){
            ret += n % 2;
            n >>= 1;
        }
        
        return ret;

    }
};