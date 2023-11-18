class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        unordered_map<int, int> colMap{}, rowMap{};

        int n = grid.size(), m = grid[0].size();

        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++){ 
                colMap[j] += grid[i][j];
                rowMap[i] += grid[i][j];
            }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                grid[i][j] = 2 * rowMap[i] + 2 * colMap[j] - n - m;
            }
        }

        return grid;
    }
};