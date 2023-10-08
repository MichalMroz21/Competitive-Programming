class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        
        map<int, pair<int, priority_queue<int>>> mp{};

        for(auto& item : items){

            auto& pair = mp[item[0]];

            pair.first += item[1];
            pair.second.push((-1) * item[1]);

            if(pair.second.size() > 5){
                pair.first += pair.second.top();
                pair.second.pop();
            }
             
        }

        vector<vector<int>> ans{};

        for(auto& [key, value] : mp){
            ans.push_back({key, value.first / 5});
        }

        return ans;
    }
};