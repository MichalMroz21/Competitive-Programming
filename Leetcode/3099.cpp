class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int xCopy = x, xSum{};

        while(x){
            xSum += x % 10;
            x /= 10;
        }

        return xCopy % xSum == 0 ? xSum : -1;
    }
};