class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        
        int prevDollars{};
        double ans{};

        for(auto& bracket : brackets){

            int dollars = min(bracket[0], income),
                taxRate = bracket[1];

            ans += (dollars - prevDollars) * (taxRate / 100.0);
            prevDollars = dollars;
        }

        return ans;
    }
};