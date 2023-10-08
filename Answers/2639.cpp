class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        
        int m = grid.size();

        if(m == 0) return {};

        int n = grid[0].size();
            
        vector<int> rowsLength(n);

        for(int i = 0; i < n; i++){

            int maxLength{};

            for(int j = 0; j < m; j++){

                int curr{grid[j][i]}, numberLength{curr <= 0};

                while(curr) {
                    curr /= 10;
                    numberLength++;
                }

                maxLength = max(maxLength, numberLength);
            }

            rowsLength[i] = maxLength;
        }

        return rowsLength;
    }
};