class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        priority_queue<int> pq{};

        for(auto i : amount) if(i != 0) pq.push(i);

        int ans{};

        while(!pq.empty()){

            int a = pq.top() - 1;
            pq.pop();

            int b{};

            if(!pq.empty()){
                b = pq.top() - 1;
                pq.pop();
            }

            if(a) pq.push(a);
            if(b) pq.push(b);

            ans++;
        }

        return ans;
    }
};