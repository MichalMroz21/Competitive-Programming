class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int, int> columnCount{};
        unordered_map<int, int> rowCount{};

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1){
                    columnCount[j]++;
                    rowCount[i]++;
                }
            }
        }

        int cnt{};

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1 && columnCount[j] == 1 && rowCount[i] == 1){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};