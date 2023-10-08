class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int m = matrix.size(), n = matrix[0].size();

        vector<int> ans{};

        int minRow{INT_MAX}, minRowIndex{};

        for(int i = 0; i < n; i++) {
            if(matrix[0][i] < minRow) {
                minRow = matrix[0][i];
                minRowIndex = i;
            }
        }

        for(int i = 0; i < n; i++){
            int maxColumn{INT_MIN};
            for(int j = 0; j < m; j++){
                maxColumn = max(matrix[j][i], maxColumn);
            }
            matrix[0][i] = maxColumn;
        }

        if(minRow == matrix[0][minRowIndex]) ans.push_back(minRow);

        for(int i = 1; i < m; i++){

            int minRow{INT_MAX}, minRowIndex{};

            for(int j = 0; j < n; j++){
                if(matrix[i][j] < minRow){
                    minRow = matrix[i][j];
                    minRowIndex = j;
                }
            }

            if(matrix[0][minRowIndex] == minRow){
                ans.push_back(minRow);
            }
        }

        return ans;
    }
};