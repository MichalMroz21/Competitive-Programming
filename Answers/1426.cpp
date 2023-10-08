class Solution {
public:
    int countElements(vector<int>& arr) {
        
        unordered_map<int, bool> mp{};

        int cnt{};

        for(auto i : arr){
            mp[i] = true;
        }

        for(auto i : arr){
            if(mp[i + 1]) cnt++;
        }

        return cnt;
    }
};