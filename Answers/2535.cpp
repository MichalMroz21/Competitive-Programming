class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum{}, digitSum{};

        for(auto num : nums){

            elementSum += num;
            
            while(num){
                digitSum += num % 10;
                num /= 10;
            }

        }

        return abs(elementSum - digitSum);
    }
};