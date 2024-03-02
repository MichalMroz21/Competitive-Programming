class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        priority_queue<int> pq{};

        int even{}, odd{1};

        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
        }

        while(!pq.empty()){
            int a = pq.top();
            pq.pop();

            if(a % 2) {
                nums[odd] = a;
                odd += 2;
            }
            else{
                nums[even] = a;
                even += 2;
            }
        }

        return nums;
    }
};
