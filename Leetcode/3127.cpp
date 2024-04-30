class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        
        for(int i = 1; i < grid.size(); i++){
            for(int j = 1; j < grid[i].size(); j++){
                unordered_map<char, int> mp{};
                mp[grid[i][j]]++;
                mp[grid[i - 1][j]]++;
                mp[grid[i - 1][j - 1]]++;
                mp[grid[i][j - 1]]++;

                if(mp['B'] >= 3 || mp['W'] >= 3) return true;
            }
        }

        return false;
    }
};