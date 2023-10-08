class Solution {
public:
    int numberOfSteps(int num) {
        
        if(num == 0) return 0;

        return __builtin_popcount(num) + log2(num);

    }
};  