class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), [](int a, int b){

            int aBits = __builtin_popcount(a);
            int bBits = __builtin_popcount(b);

            if(aBits == bBits) return a < b;
            return aBits < bBits;

        });

        return arr;

    }
};