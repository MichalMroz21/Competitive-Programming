class Solution {
public:
    int minPathSum(vector<vector<int>> grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 1; i < m; i++){
          grid[0][i] += grid[0][i - 1];
        }


        for(int i = 1; i < n; i++){

          for(int j = 0; j < m; j++){

            if(j == 0){

              grid[i][j] += grid[i - 1][j]; 

            }

            else{

              grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);

            }

          }

        }

        return grid[n - 1][m - 1];
    }
};