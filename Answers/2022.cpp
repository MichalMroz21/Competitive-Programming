class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>> res(m, vector<int>(n));

        int k{};

        for(int i = 0; i < m; i++){

            for(int j = 0; j < n; j++){

                if(k == original.size()) return {};
                res[i][j] = original[k++];       

            }

        }

        if(k != original.size()) return {};
        return res;
    }
};