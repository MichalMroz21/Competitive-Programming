class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size(), currMax{-1};

        for(int i = n - 1; i >= 0; i--){

            int newCurrMax = max(currMax, arr[i]);
            arr[i] = currMax;
            currMax = newCurrMax;

        }

        return arr;

    }
};