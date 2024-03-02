// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int L = 1;
        int R = n;

        while(L < R){

            int m = L + (R - L)/2;

            if(isBadVersion(m)) R = m;
            else L = m + 1;            

        }

        if(isBadVersion(L)) return L;
        else return 0;

    }
};