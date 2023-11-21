class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        unordered_map<char, int> lastPos{};

        int ans{};

        for(int i = 0; i < garbage.size(); i++){
            for(auto& j : garbage[i]){
                ans++;
                lastPos[j] = max(lastPos[j], i);
            }
        }

        for(auto& [key, value] : lastPos){
            for(int i = 0; i < value; i++) ans += travel[i];
        }

        return ans;
    }
};
