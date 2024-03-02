class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> countMap{};

        for(auto ch : s) countMap[ch]++;

        priority_queue<pair<int, char>> maxHeap{};

        for(auto [key, value] : countMap) maxHeap.push(make_pair(value, key));

        string ret{};

        while(!maxHeap.empty()){

            ret += string(maxHeap.top().first, maxHeap.top().second);
            maxHeap.pop();

        }

        return ret;
    }
};