class Solution {
public:
    int splitNum(int num) {

        priority_queue<int> pq{};

        while(num){
            pq.push(-(num % 10));
            num /= 10;
        }

        int i{}, n{2};
        
        vector<int> nums(n);
        
        while(!pq.empty()){

            nums[i] *= 10;
            nums[i] += -pq.top();
            pq.pop();

            i++;
            if(i == n) i = 0;
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};