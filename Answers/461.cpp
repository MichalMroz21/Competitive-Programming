class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int ret{};

        while(!(x == 0 && y == 0)){

            ret += ((x & 1) != (y & 1));
            x >>= 1;
            y >>= 1;

        }


        return ret;
    }
};