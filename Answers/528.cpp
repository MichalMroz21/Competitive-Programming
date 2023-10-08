class Solution {
public:

    int sum{}, n{};
    vector<int> w{}, wSums{};

    Solution(vector<int>& w) : w(w), n(w.size()) {
        wSums.resize(n);

        if(n == 0) return;

        wSums[0] = w[0];
        sum = w[0];

        for(int i = 1; i < n; i++) {
            sum += w[i];
            wSums[i] += wSums[i - 1] + w[i];
        }
    }
    
    int pickIndex() {

        int pick = rand() % sum + 1;
        int L = 0, R = n - 1;

        while(L < R){

            int m = L + (R - L)/2;

            if(pick <= wSums[m]) R = m;
            else L = m + 1;
        }

        return R;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */