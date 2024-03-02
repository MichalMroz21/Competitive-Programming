class Solution {
public:
    int alternateDigitSum(int n) {

        int howManyNumbers = log10(n) + 1, ans{};

        bool alternate = howManyNumbers % 2;

        while(n){

            if(alternate) ans += n % 10;
            else ans -= n % 10;

            alternate = !alternate;
            n /= 10;
        }

        return ans;
    }
};