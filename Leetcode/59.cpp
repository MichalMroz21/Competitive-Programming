class Solution {
public:
    enum class Direction{
        right, down, left, up
    };

    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> result(n, vector<int>(n, 0));

        int i{}, j{-1};
        int availableRows{n}, availableColumns{n};

        int insertValue{1};

        Direction dir = Direction::right;

        while(availableRows != 0 && availableColumns != 0){

            bool dirChoice { (dir == Direction::left || dir == Direction::right) };
            int insertTimes { (dirChoice ? availableColumns : availableRows) };

            if(dirChoice) availableRows--; 
            else availableColumns--;

            while(insertTimes != 0){

                switch(dir){
                    case Direction::left: j--; break;
                    case Direction::right: j++; break;
                    case Direction::up: i--; break;
                    case Direction::down: i++; break;            
                }

                result[i][j] = insertValue;

                insertValue++;
                insertTimes--;
            }

            if(dir == Direction::up) dir = Direction::right;
            else dir = static_cast<Direction>(static_cast<int>(dir) + 1);
        }

        return result;
    }
};