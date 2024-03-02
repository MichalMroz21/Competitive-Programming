class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastStock{prices[0]};
        int n = prices.size();
        int profit{};

        for(int i=1; i<n; i++){
            int a = prices[i];

            if(a > lastStock) {
                profit += a - lastStock;   
            }
            lastStock = a;
        }

        return profit;
    }
};