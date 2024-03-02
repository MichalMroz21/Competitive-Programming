class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        vector<int> ans(k);

        unordered_map<int, unordered_set<int>> userMap{};

        for(auto& i : logs){
            if(userMap.find(i[0]) == userMap.end()) userMap[i[0]] = {};
            userMap[i[0]].insert(i[1]);
        }

        for(auto& [key, value] : userMap){
            if(value.size() == 0) continue;
            ans[value.size() - 1]++;
        }

        return ans;
    }
};