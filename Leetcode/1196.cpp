class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        
        int ans{}, currWeight{};

        const int MAX_WEIGHT = 5000;

        priority_queue<int> pq{};

        for(auto i : weight) pq.push(-i);

        while(!pq.empty()){

            currWeight += -pq.top();

            if(currWeight > MAX_WEIGHT) break;

            ans++;

            pq.pop();
        }

        return ans;
    }
};