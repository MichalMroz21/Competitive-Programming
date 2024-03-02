class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        auto minFirstIterator = min_element(prices.begin(), prices.end());
        int minFirstIndex = minFirstIterator - prices.begin();

        int minSecond = INT_MAX;

        for(int i = 0; i < prices.size(); i++){

            if(i == minFirstIndex) continue;

            minSecond = min(minSecond, prices[i]);
        }

        int leftMoney = money - minSecond - *minFirstIterator;

        if(leftMoney < 0) return money;
        return leftMoney;

    }
};