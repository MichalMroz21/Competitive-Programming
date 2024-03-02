class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> result{};
        const size_t numsSize{nums.size()};

        for(size_t i{}; i < numsSize; i++){

            if(const int a { abs(nums[i]) }; nums[a - 1] > 0) {
                nums[a - 1] *= -1;
            }

        }

        for(size_t i{}; i < numsSize; i++){

            if(nums[i] > 0) result.push_back(i + 1);

        }

        return result;
    }
};