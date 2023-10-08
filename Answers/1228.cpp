class Solution {
public:
    int missingNumber(vector<int>& arr) {
        
        int n = arr.size() + 1, mx = *max_element(arr.begin(), arr.end()),
        mn = *min_element(arr.begin(), arr.end());

        return (mx + mn) * n / 2.0 - accumulate(arr.begin(), arr.end(), 0);
    }
};