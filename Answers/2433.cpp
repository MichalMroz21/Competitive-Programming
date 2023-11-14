class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int currXor{};

        for(auto& i : pref){

            int x = currXor ^ i;
            i = x;
            currXor ^= x;
        }

        return pref;
    }
};