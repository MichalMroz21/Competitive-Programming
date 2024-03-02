class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        long long maxRet{};

        int mx{}, mn{INT_MAX}, maxDiff{};

        for(auto i : nums){

            if(mn != INT_MAX) maxDiff = max(maxDiff, mx - mn);
            if(maxDiff > maxRet/i) maxRet = (long long) maxDiff * i;

            if(i > mx) {mx = i; mn = INT_MAX;}
            else if(i < mn) mn = i;

        }

        return maxRet;
    }
};