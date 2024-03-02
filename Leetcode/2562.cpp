class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {

        long long result{};

        int L = 0, R = nums.size() - 1;

        while(L <= R){

            result += nums[L] * pow(10, static_cast<int>(log10(nums[R])) + 1) * (L != R) + nums[R];

            R--;    
            L++;
        }

        return result;
    }
};