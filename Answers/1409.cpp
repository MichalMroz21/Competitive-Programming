class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        
        unordered_map<int, int> mp{};

        for(int i = 1; i <= m; i++) mp[i] = i - 1;

        vector<int> ans{};

        for(auto i : queries){

            int currPos = mp[i];

            ans.push_back(currPos);

            for(auto& [key, value] : mp){
                if(value < currPos) mp[key]++;
            }

            mp[i] = 0;
        }

        return ans;
    }
};