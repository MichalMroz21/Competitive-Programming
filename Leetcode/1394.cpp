class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freqMap{};

        for(auto& i : arr) freqMap[i]++;

        int ans{-1};

        for(auto& [key, value] : freqMap){
            if(value == key) ans = max(ans, value);
        }

        return ans;
    }
};