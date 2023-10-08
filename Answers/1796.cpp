class Solution {
public:
    int secondHighest(string s) {
        
        priority_queue<int, vector<int>, greater<int>> pq{};
        unordered_map<int, bool> inPQ{};

        constexpr int k = 2;

        for(auto i : s){

            if(isdigit(i) && inPQ[i - '0'] == false){

                pq.push(i - '0');
                inPQ[i - '0'] = true;

                if(pq.size() > k) {
                    inPQ[pq.top()] = false;
                    pq.pop();
                }
            }

        }

        if(pq.size() < k) return -1;

        return pq.top();
    }
};