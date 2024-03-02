class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        int row{}, column{};
        vector<bool> captures(4, false);

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){   
                if(board[i][j] == 'R'){
                    row = i;
                    column = j;
                }
            }
        }

        for(int j = 0; j < board[row].size(); j++){
            if(board[row][j] == '.') continue;
            if(j < column){
                captures[0] = (board[row][j] == 'p');
            }
            else{
                if(board[row][j] == 'B' && captures[1] == false) break;
                if(board[row][j] == 'p') captures[1] = true;
            }
        }

        for(int i = 0; i < board.size(); i++){
            if(board[i][column] == '.') continue;
            if(i < row){
                captures[2] = (board[i][column] == 'p');
            }
            else{
                if(board[i][column] == 'B' && captures[3] == false) break;
                if(board[i][column] == 'p') captures[3] = true;
            }
        }


        return accumulate(captures.begin(), captures.end(), 0);
    }
};