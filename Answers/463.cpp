class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int perimeter{};

        for(int i = 0; i < grid.size(); i++){

            for(int j = 0; j < grid[i].size(); j++){

                if(grid[i][j] == 0) continue;

                perimeter += 4;

                if(i != 0) perimeter -= grid[i - 1][j] * 2;     
                if(j != 0) perimeter -= grid[i][j - 1] * 2;      
            }
        }

        return perimeter;
    }
};