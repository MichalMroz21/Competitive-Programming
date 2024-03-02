class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ret{};

        ret += min(numOnes, k);
        k -= min(k, numOnes);
               
        k -= min(k, numZeros); 

        ret -= min(numNegOnes, k);

        return ret;
    }
};