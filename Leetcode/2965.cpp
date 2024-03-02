class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid[0].size(), a{}, b{};

        int actualSum{}, realSum{};

        realSum = ( (n * n) * (n * n + 1) ) / 2;

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                int ind = abs(grid[i][j]);

                actualSum += ind;

                if(grid[(ind - 1) / n][(ind - 1) % n] < 0) a = ind;

                else grid[(ind - 1) / n][(ind - 1) % n] *= -1;
            }

        }

        b = realSum - actualSum + a;

        return {a, b};
    }
};