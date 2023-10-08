class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int right = sqrt(c);
        int left = 0;

        while(left <= right){

            if(left * left > numeric_limits<int>::max() - right * right) {right--; continue;}
            int k = left * left + right * right;

            if(k == c) return true;
            else if(k < c) left++;
            else right--;
        }


        return false;

    }
};