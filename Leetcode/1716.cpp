class Solution {
public:
    int totalMoney(int n) {

        //Sn = (a1 + an) // 2.0 * n = (2a1 + nr - r) // 2.0 * n 
        //an = a1 + (n - 1) * r
        
        return (n / 7) * 28 +  (1 + (n % 7)) / 2.0 * (n % 7) +    
        (2 * 7 + (n / 7 - 1) * 7 - 7) / 2.0 * (n / 7 - 1) + 
        (n % 7) * (n / 7);

    }
};