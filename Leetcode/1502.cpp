class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int prev = arr[0];
        int diff = arr[1] - prev;
        prev = arr[1];

        for(int i = 2; i<n; i++){

            int a = arr[i];
            if(arr[i] - prev != diff) return false;
            else prev = arr[i];  

        }
        return true;
    }
};