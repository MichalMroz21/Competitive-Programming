class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        
        int n = arr.size(), L{}, R = n - 1;

        while(L < R){

            int m = L + (R - L)/2;

            if(arr[m] < m) L = m + 1;
            else R = m;
        }

        if(arr[R] == R) return R;
        return -1;
    }
};