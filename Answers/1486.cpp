class Solution {
public:
    int xorOperation(int n, int start) {
        
        int i = start + 2;

        while(--n){

            start ^= i;
            i += 2;

        }


        return start;
    }
};