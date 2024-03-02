class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int n = 9;
        int gridSize = sqrt(n);

        vector<vector<int>> hashMapsRow(n, vector<int>(n, 0));
        vector<vector<int>> hashMapsColumn(n, vector<int>(n, 0));
        vector<vector<int>> hashMapsBox(n, vector<int>(n, 0));

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                if(board[i][j] == '.') continue;
                int currNumber = board[i][j] - '0';
                
                if(hashMapsRow[i][currNumber - 1] == 1) return false;
                if(hashMapsColumn[j][currNumber - 1] == 1) return false;
                if(hashMapsBox[(i/3) * 3 + (j/3)][currNumber - 1] == 1) return false;
                
                hashMapsBox[(i/3) * 3 + (j/3)][currNumber - 1]++;
                hashMapsRow[i][currNumber - 1]++;
                hashMapsColumn[j][currNumber - 1]++;
            }

        }

        return true;

    }
};