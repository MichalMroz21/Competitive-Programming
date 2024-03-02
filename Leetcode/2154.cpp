class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        vector<int> mp(32);

        for(auto i : nums){
            if(original > i) continue;
            double doub = log2((double)i / original);
            if(doub == (int)doub) mp[doub] = true; 
        }

        for(int i = 0; i < 32; i++){
            if(mp[i] == 0) break;
            original <<= 1;
        }

        return original;
    }
};