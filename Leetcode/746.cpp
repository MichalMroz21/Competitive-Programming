class Solution {
public:

    int minCostClimbingStairsRec(vector<int>& cost, int n, unordered_map<int, int>& memo){

        if(n <= 1) return cost[n];
        if(memo.find(n) != memo.end()) return memo[n];

        memo[n] = min(minCostClimbingStairsRec(cost, n - 1, memo) + cost[n], minCostClimbingStairsRec(cost, n - 2, memo) + cost[n]);
        return memo[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        
        unordered_map<int, int> memo{};
        int n = cost.size();
        return min(minCostClimbingStairsRec(cost, n - 1, memo), minCostClimbingStairsRec(cost, n - 2, memo));

    }
};