class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int k{};

        for(auto& sh : shift){
            if(sh[0]) k += sh[1];
            else k -= sh[1];
        }

        bool shiftRight = k > 0;

        k = abs(k) % s.size();

        if(k == 0) return s;

        if(shiftRight) reverse(s.begin(), s.end());
        reverse(s.begin(), s.begin() + k);
        reverse(s.begin() + k, s.end());
        if(!shiftRight) reverse(s.begin(), s.end());

        return s;
    }
};