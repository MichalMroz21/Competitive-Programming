class Solution {
public:

    enum class Player{
        A, B, Size
    };

    static constexpr int BOARD_SIZE = 3, PLAYERS_COUNT = static_cast<int>(Player::Size);
    const string PENDING = "Pending", DRAW = "Draw", STARTING_PLAYER = "A";

    string tictactoe(vector<vector<int>>& moves) {

        Player curPlayer = Player::A;

        unordered_map<int, string> winner{};
        for(int i = static_cast<int>(curPlayer); i < PLAYERS_COUNT; i++) winner[i] = string(1, STARTING_PLAYER[0] + i);

        vector<vector<int>> rows(PLAYERS_COUNT, vector<int>(BOARD_SIZE, 0)), 
        columns(PLAYERS_COUNT, vector<int>(BOARD_SIZE, 0));
        
        vector<int> diag(PLAYERS_COUNT, 0), secondDiag(PLAYERS_COUNT, 0);
        
        const int movesCount = moves.size();

        for(const auto& move : moves){

            const int row = move[0], col = move[1], pInt = static_cast<int>(curPlayer);

            rows[pInt][row]++;
            columns[pInt][col]++;

            if(row == col) diag[pInt]++;
            if(row == BOARD_SIZE - 1 - col) secondDiag[pInt]++;

            if(rows[pInt][row] == BOARD_SIZE || columns[pInt][col] == BOARD_SIZE 
            || diag[pInt] == BOARD_SIZE || secondDiag[pInt] == BOARD_SIZE) return winner[pInt];

            curPlayer = static_cast<Player>( static_cast<int>(curPlayer) + 1 );
            if(curPlayer == Player::Size) curPlayer = Player::A;
        }

        if(movesCount != BOARD_SIZE * BOARD_SIZE) return PENDING;
        else return DRAW;
    }
};