class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        unordered_map<char, int> lastPos{};

        int ans{};

        for(int i = 0; i < garbage.size(); i++){
            for(auto& j : garbage[i]){
                ans++;
                lastPos[j] = max(lastPos[j], i + 1);
            }
        }

        for(auto& [key, value] : lastPos){
            if(value == 0) continue;
            for(int i = 0; i < value - 1; i++) ans += travel[i];
        }

        return ans;
    }
};