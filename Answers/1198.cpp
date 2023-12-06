class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int ans{INT_MAX};

        unordered_map<int, int> mp{};

        for(int i = 0; i < mat.size(); i++){
          for(int j = 0; j < mat[i].size(); j++){
              mp[mat[i][j]]++;
           }
        }

        for(auto& [key, value] : mp){
          if(value == mat.size()) ans = min(ans, key);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};