class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int L=0;
        int R=arr.size();

        while(L < R){

            int m = L + (R - L)/2; 
            int a = arr[m];

            if(a - (m + 1) >= k) R = m;
            else L = m + 1;

        }

        return R + k;
    }
};