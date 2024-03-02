class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n = arr.size();

        vector<int> cand{arr[0], arr[n/4], arr[n/2], arr[n * 3 / 4]};

        for(auto i : cand){

            int L{}, R{n - 1};

            while(L < R){

                int m = (R - L)/2 + L;

                if(arr[m] > i) R = m - 1;
                else if(arr[m] == i) R = m;
                else L = m + 1;

            }

            int lowerIndex = R;

            L = 0;
            R = n - 1;

            while(L + 1 < R){

                int m = (R - L)/2 + L;

                if(arr[m] > i) R = m - 1;
                else if(arr[m] == i) L = m;
                else L = m + 1;

            }

            int higherIndex{L};

            if(arr[R] == i) higherIndex = R;

            if(higherIndex - lowerIndex + 1 > n / 4) return i; 
        }

        return -1;
    }
};