class Solution {
public:

    void backtrack(vector<int>& nums, int& answer, int prevXor, int index){

        prevXor = prevXor ^ nums[index];
        answer += prevXor;

        for(int i = index + 1; i < nums.size(); i++){
            backtrack(nums, answer, prevXor, i);
        }
    }

    int subsetXORSum(vector<int>& nums) {
        int answer{};

        for(int i = 0; i < nums.size(); i++) 
            backtrack(nums, answer, 0, i);

        return answer;
    }
};