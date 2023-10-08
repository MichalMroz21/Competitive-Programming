class Solution {
public:

    bool check(vector<int> piles, long long h, long long k){

        int hourSpent{};
        for(auto a : piles){

            hourSpent += ceil((double)(a) / k);

        }
    
        return hourSpent <= h;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        
        int L = 1;
        int R = *max_element(piles.begin(), piles.end());

        while(L < R){

            int m = L + (R - L)/2;

            if(check(piles, h, m)) R = m;
            else L = m + 1;

        }

        return R;

    }
};