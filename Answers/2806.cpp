class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int a = 100 - purchaseAmount;
        
        if(a % 10 <= 5) return a - a % 10;
        else return a + (10 - a % 10); 
    }
};