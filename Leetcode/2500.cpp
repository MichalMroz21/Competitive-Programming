class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {

        for(int i = 0; i < grid.size(); i++){

            sort(grid[i].begin(), grid[i].end());

        }

        int ans{};

        for(int j = 0; j < grid[0].size(); j++){

            int maxVal{};

            for(int i = 0; i < grid.size(); i++){

                maxVal = max(grid[i][j], maxVal);

            }

            ans += maxVal;

        }

        return ans;

    }
};