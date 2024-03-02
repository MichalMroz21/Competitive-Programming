class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {

        int evenCount{}, oddCount{};

        for(auto i : position) {
            evenCount += !(i % 2);
            oddCount += i % 2;
        }

        return min(evenCount, oddCount);
    }
};