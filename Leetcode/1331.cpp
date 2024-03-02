class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        priority_queue<pair<int, int>> pq{};

        for(int i = 0; i < arr.size(); i++){
            pq.push({-arr[i], i});
        }

        if(pq.empty()) return {};

        int prev = -pq.top().first, rank{1};

        while(!pq.empty()){

            pair<int, int> curr = pq.top();
            int currIndex = curr.second, currValue = -curr.first;

            pq.pop();

            if(currValue > prev){
                rank++;
            }

            arr[currIndex] = rank;
            prev = currValue;
        }

        return arr;
            
    }
};