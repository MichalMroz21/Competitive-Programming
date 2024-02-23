class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        for(int j = 0; j < matrix[0].size(); j++){

            int mx{};

            for(int i = 0; i < matrix.size(); i++){
                mx = max(mx, matrix[i][j]);
            }

            for(int i = 0; i < matrix.size(); i++){
                if(matrix[i][j] < 0) matrix[i][j] = mx;
            }
        }

        return matrix;
    }
};