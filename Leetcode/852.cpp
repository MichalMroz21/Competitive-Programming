class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int L = 0;
        int R = arr.size() - 1;
        int res{};


        while(L <= R){

            int m = L + (R - L)/2;
            int mid = arr[m];
            int right = m + 1 == arr.size() ? numeric_limits<int>::max() : arr[m+1];
            int left = m == 0 ? numeric_limits<int>::min() : arr[m-1];

            if(left < mid && right < mid) {res = m; break;}
            else if(right > mid) L = m + 1;
            else R = m - 1;

        }


        return res;

    }
};