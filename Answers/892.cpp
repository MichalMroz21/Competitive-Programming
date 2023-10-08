class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        
        int n = grid.size(), countZero{}, ans{2 * (n * n)};

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

                if(j != 0) ans += abs(grid[i][j - 1] - grid[i][j]);
                if(i != 0) ans += abs(grid[i - 1][j] - grid[i][j]);
                
                if(j == 0) ans += grid[i][j];
                if(j == n - 1) ans += grid[i][j];
                if(i == 0) ans += grid[i][j];
                if(i == n - 1) ans += grid[i][j];

                if(grid[i][j] == 0) ans -= 2;

            }
        }

        return ans;

    }
};