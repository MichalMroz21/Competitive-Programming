class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();

        int xz{}, yz{}, xy{m * n};

        int countZero{};

        for(int i = 0; i < n; i++){

            int maxColumn{};

            for(int j = 0; j < m; j++){
                maxColumn = max(maxColumn, grid[i][j]);
                if(grid[i][j] == 0) countZero++;
            }

            xz += maxColumn;
        }

        for(int j = 0; j < m; j++){

            int maxColumn{};

            for(int i = 0; i < n; i++){
                maxColumn = max(maxColumn, grid[i][j]);
            }

            yz += maxColumn;
        }

        return xz + yz + xy - countZero;
    }
};