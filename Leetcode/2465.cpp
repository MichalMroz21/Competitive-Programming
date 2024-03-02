class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        unordered_set<double> st{};

        sort(nums.begin(), nums.end());

        int L{}, R = nums.size() - 1;

        while(L < R){

            st.insert((nums[L] + nums[R]) / 2.0);

            R--;
            L++;
        }

        return st.size();
    }
};