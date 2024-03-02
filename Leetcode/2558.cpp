class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> pq{};

        for(const auto& i : gifts) pq.push(i);

        while(k--){

            int curr = pq.top();
            pq.pop();

            pq.push(sqrt(curr));
        }

        long long answer{};

        while(!pq.empty()){
            answer += pq.top();
            pq.pop();
        }

        return answer;
    }
};