class Solution {
public:
    enum class Direction{
        right, down, left, up
    };

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        if(matrix.empty()) return {};

        vector<int> result{};

        std::for_each(matrix[0].begin(), matrix[0].end(), [&result](int curr){result.push_back(curr); } );

        int i = 0, j = matrix[0].size() - 1; 
        int availableRows = matrix.size() - 1, availableColumns = matrix[0].size(); 

        Direction dir = Direction::down;

        while(availableRows != 0 && availableColumns != 0){

            if(dir == Direction::down || dir == Direction::up){

                int temp = availableRows;

                while(temp != 0) {
                    i += (dir == Direction::down ? 1 : -1);
                    result.push_back(matrix[i][j]); 
                    temp--;
                }
                    
                availableColumns--;
            }

            if(dir == Direction::left || dir == Direction::right){

                int temp = availableColumns;

                while(temp != 0) {
                    j += (dir == Direction::left ? -1 : 1);
                    result.push_back(matrix[i][j]); 
                    temp--;
                }

                availableRows--;
            }

            if(dir == Direction::up) dir = Direction::right;
            else dir = static_cast<Direction>(static_cast<int>(dir) + 1);
        }

        return result;
    }
};