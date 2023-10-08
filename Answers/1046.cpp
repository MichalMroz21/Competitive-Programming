class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq(stones.begin(), stones.end());

        while(pq.size() > 1){

            int firstStone = pq.top();
            pq.pop();

            int secondStone = pq.top();
            pq.pop();

            pq.push(firstStone - secondStone);
        }

        return pq.top();
    }
};