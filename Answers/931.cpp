class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        for(int i = 1; i < n; i++){

            for(int j = 0; j < n; j++){

                int minValue{INT_MAX};

                if(j != 0) minValue = min(minValue, matrix[i][j] + matrix[i - 1][j - 1]);
                if(j != n - 1) minValue = min(minValue, matrix[i][j] + matrix[i - 1][j + 1]);

                minValue = min(minValue, matrix[i][j] + matrix[i - 1][j]);

                matrix[i][j] = minValue;
            }

        }

        return *min_element(matrix[n - 1].begin(), matrix[n - 1].end());

    }
};