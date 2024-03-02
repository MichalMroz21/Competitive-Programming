class Solution {
public:
    int countDigits(int num) {
        
        int numCopy = num, ans{};

        while(num){
            ans += !(numCopy % (num % 10));
            num /= 10;
        }

        return ans;

    }
};