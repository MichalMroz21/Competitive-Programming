class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        
        int n = grid.size();

        for(int j = 0; j < n; j++){
            int cnt{};
            for(int i = 0; i < n; i++){
                cnt += grid[i][j];
            }

            if(cnt == 0) return j;
        }

        return -1;
    }
};
