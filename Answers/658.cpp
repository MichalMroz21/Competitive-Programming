class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int L = 0; 
        int R = arr.size() - 1;
        int n = arr.size();
        int res{-1};

        while(L < R){
            int m = L + (R - L)/2;
            int k = arr[m];

            if(k == x) {res = m; break;}
            else if(k < x) L = m + 1;
            else R = m;
        }

        if(res != -1){
            R = res;
        }

        L = R - 1;

        while(k--){ 
            if(R >= n || L >= 0 && x - arr[L] <= arr[R] - x) L--;  
            else R++;
        }  

        return vector<int>(arr.begin() + L + 1, arr.begin() + R);
    
    }
};