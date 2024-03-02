class Solution {
public:

    int numWaterBottles(int numBottles, int numExchange, int remainder = 0) {

        if(numBottles == 0) return 0;

        div_t result = div(numBottles + remainder, numExchange);

        return numBottles + numWaterBottles(result.quot, numExchange, result.rem);

    }
};