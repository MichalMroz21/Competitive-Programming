class Solution {
public:
    int minimumCost(vector<int>& nums) {
        
        priority_queue<int> pq{};

        for(int i = 1; i < nums.size(); i++){

            if(pq.size() < 2) pq.push(nums[i]);

            else if(nums[i] < pq.top()){
                pq.push(nums[i]);
                pq.pop();
            }
        }

        int a = pq.top();
        pq.pop();

        return nums[0] + a + pq.top();
    }
};