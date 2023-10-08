class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size(), j = n - 1 + count(arr.begin(), arr.end(), 0);
        
        for(int i = n - 1; i >= 0; i--, j--){
            if(arr[i] == 0 && --j + 1 < n)  arr[j + 1] = 0;                    
            if(j < n) arr[j] = arr[i];
        }

    }
};