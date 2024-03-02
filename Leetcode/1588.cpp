class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();

        int res{};

        for(int i=0; i<n; i++){

            int a = (i + 1) * (n-i);
            res += arr[i] * (a % 2 ? a / 2 + 1 : a / 2);

        }

        return res;

    }
};