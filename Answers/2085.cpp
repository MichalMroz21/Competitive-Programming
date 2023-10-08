class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp{};

        for(auto& i : words1) {
            if(mp[i] == 1) mp[i] = -1;
            else if(mp[i] == 0) mp[i] = 1;  
        }

        for(auto& i : words2){
            if(mp[i] == 1) mp[i] = 2;
            else if(mp[i] == 2) mp[i] = -1;
        }

        int cnt{};

        for(auto [key, value] : mp){
            if(value == 2) cnt++;
        }

        return cnt;
    }
};