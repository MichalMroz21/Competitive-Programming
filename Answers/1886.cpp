class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool pos1{true}, pos2{true}, pos3{true}, pos4{true};

        int n = mat.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[j][n - i - 1]){ //get this 1 clockwise rotation formula by analyzing examples
                    pos1 = false;
                }

                //then use this formula for doing 1 clockwise rotation to get formulas for 2 clockwise and 3 clockwise mathematically,
                //for 2 clockwise simulate 2 one clockwise rotations, just like you would use this formula, but twice.

                //mat[j][n - i - 1] => target[n - i - 1][n - j - 1] 2 clockwise
                //mat[n - i - 1][n - j - 1] => target[n - j - 1][n - (n - i - 1) - 1] 3 clockwise
                
                if(mat[i][j] != target[n - i - 1][n - j - 1]){
                    pos2 = false;
                }
                if(mat[i][j] != target[n - j - 1][i]){
                    pos3 = false;
                }
                if(mat[i][j] != target[i][j]){
                    pos4 = false;
                }
            }
        }

        return pos1 || pos2 || pos3 || pos4;
    }
};