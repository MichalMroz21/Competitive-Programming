class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> freqMap{};

        for(auto i : nums){
            freqMap[i]++;
        }

        priority_queue<pair<int, int>> pq{};

        for(auto [key, value] : freqMap){
            pq.push({(-1) * value, key});
        }

        vector<int> ans{};

        while(!pq.empty()){
            pair<int, int> curr = pq.top();
            pq.pop();

            int n = curr.first * (-1);
            while(n--) ans.push_back(curr.second);
        }

        return ans;
    }
};