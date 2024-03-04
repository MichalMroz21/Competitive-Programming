class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
        int n = mat.size(), m = mat[0].size();

        k %= m;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(j % 2 && mat[i][(j + k) % m] != mat[i][j]) return false;
                if(j % 2 == 0 && mat[i][(j + k) % m] != mat[i][j]) return false;
            }
        }

        return true;
    }
};