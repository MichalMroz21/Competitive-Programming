class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit{};
        int currDayOne{numeric_limits<int>::max()};

        for(int i : prices){

            if(i < currDayOne) currDayOne = i;
            else maxProfit = max(maxProfit, i - currDayOne);

        }

        return maxProfit;

    }
};