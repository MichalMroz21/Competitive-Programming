class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int evenCnt{};

        for(int i = 0; i < nums.size(); i++){
            if(!(nums[i] % 2)) evenCnt++; 
        }

        return evenCnt >= 2;
    }
};