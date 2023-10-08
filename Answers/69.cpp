class Solution {
public:
    int mySqrt(int x) {

        int L = 1;
        int R = x;

        int ret{};

        while(L <= R){

            int m = L + (R - L)/2;

            if(m > numeric_limits<int>::max()/m){
                R = m - 1;
                continue;
            }

            int sqr = m * m;

            if(x == sqr) {ret = m; break;}
            if(x > sqr) {ret = m; L = m + 1;} 
            else R = m - 1;

        }

        return ret;

    }
};