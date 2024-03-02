class Solution {
public:
    bool divideArray(vector<int>& nums) {

        short n = nums.size() / 2;

        unordered_map<short, bool> wasBefore{};

        for(const short& i : nums){

            n -= wasBefore[i];
            wasBefore[i] = !wasBefore[i];

        }

        return n == 0;
    }
};