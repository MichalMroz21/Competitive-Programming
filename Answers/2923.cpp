class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        
        unordered_map<int, bool> isWorse{};

        int n = grid.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(i == j) continue;

                if(grid[i][j]){
                    isWorse[j] = true;
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(isWorse[i] == false) return i;
        }

        return -1;
    }
};