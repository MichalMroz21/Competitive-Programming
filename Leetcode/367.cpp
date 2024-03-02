class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int L = 1;
        int R = num;

        while (L <= R) {

            int m = L + (R - L)/2;

            if(m > numeric_limits<int>::max()/m){
                R = m - 1;
                continue;
            }

            int temp = m * m;

            if(temp == num) return true;

            else if(temp < num){
                L = m + 1;
            }

            else R = m - 1;
        }

        return false;
    }
};