class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st = unordered_set<int>(nums.begin(), nums.end());
        return st.size() - st.count(0);
    }
};