class Solution {
public:

    void scuffedRecursion(int i, int j, int k, int n, int m, int& done, vector<vector<int>>& grid){

        int save = grid[i][j], expected = (m * n - j)/k;

        while(expected){

            i = (i + (j + k)/m) % n;
            j = (j + k % m) % m;

            int temp = grid[i][j];
            grid[i][j] = save;
            save = temp;

            expected--;
            done--;
        }

    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n = grid.size(), m = grid[0].size(), j{}, done = m * n;

        while(done){
            scuffedRecursion(0, j, k, n, m, done, grid);
            j++;
        }

        return grid;
    }
};