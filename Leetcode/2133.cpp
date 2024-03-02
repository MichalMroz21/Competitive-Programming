class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
      
        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                if (matrix[i][abs(matrix[i][j]) - 1] < 0) return false;
                matrix[i][abs(matrix[i][j]) - 1] *= -1;

            }

        }

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                if (matrix[abs(matrix[j][i]) - 1][i] > 0) return false;
                matrix[abs(matrix[j][i]) - 1][i] *= -1;

            }

        }
    
        return true;
    }
};