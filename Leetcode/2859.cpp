class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int answer{}, j{};

        for(auto i : nums){

            int ones = __builtin_popcount(j++);
            if(ones == k) answer += i;

        }

        return answer;
    }
};