/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int L = 1;
        int R = n;
        
        while(L <= R){
            
            int m = L + (R - L)/2;
            int g = guess(m);
            
            if(g == 0) return m;
            if(g == -1) R = m - 1;
            if(g == 1) L = m + 1;
            
            
        }
        
        return -1;
        
    }
};