class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();

        for(int j = 0; j < m; j++){

            priority_queue<int> pq{};

            for(int i = 0; i < n && i + j < m; i++){
                pq.push(-mat[i][i + j]);
            }

            for(int i = 0; i < n && i + j < m; i++){
                mat[i][i + j] = -pq.top();
                pq.pop();
            }
        }

        for(int i = 0; i < n; i++){

            priority_queue<int> pq{};

            for(int j = 0; j < m && i + j < n; j++){
                pq.push(-mat[i + j][j]);
            }

            for(int j = 0; j < m && i + j < n; j++){
                mat[i + j][j] = -pq.top();
                pq.pop();
            }
        }

        return mat;
    }
};