class Solution {
public:
    bool isArmstrong(int n) {
        
        int length = log10(n) + 1;

        int sum{};
        int nCopy{n};

        while(n != 0){
            sum += pow(n % 10, length);
            n /= 10;
        }

        return sum == nCopy;

    }
};