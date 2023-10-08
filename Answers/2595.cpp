class Solution {
public:
    vector<int> evenOddBit(int n) {

        bool swap = false;
        vector<int> res(2);

        while(n){

            res[swap] += n & 1;
            n >>= 1;

            swap = !swap;
        }

        return res;
    }
};