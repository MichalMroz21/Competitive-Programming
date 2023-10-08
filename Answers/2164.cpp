class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        priority_queue<int> evenHeap{}, oddHeap{};

        for(int i = 0; i < nums.size(); i++){
            if(i % 2) oddHeap.push(nums[i]);
            else evenHeap.push(-nums[i]);
        }

        for(int i = 0; i < nums.size(); i++){
            if(i % 2) {
                nums[i] = oddHeap.top();
                oddHeap.pop();
            }
            else{
                nums[i] = -evenHeap.top();
                evenHeap.pop();
            }
        }

        return nums;
    }
};