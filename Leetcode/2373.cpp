class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        constexpr int SIZE_OF_MATRIX = 3;
        const int MAX_LINE = grid.size(), ANSWER_SIZE = MAX_LINE - SIZE_OF_MATRIX + 1;

        int columnLine{SIZE_OF_MATRIX - 1}, rowLine{SIZE_OF_MATRIX - 1};

        vector<vector<int>> answerMatrix(ANSWER_SIZE, vector<int>(ANSWER_SIZE));

        while(rowLine != MAX_LINE){

            int maxValue = INT_MIN;

            for(int i = rowLine - SIZE_OF_MATRIX + 1; i < rowLine + 1; i++)
                for(int j = columnLine - SIZE_OF_MATRIX + 1; j < columnLine + 1; j++)
                    maxValue = max(maxValue, grid[i][j]);
                
            answerMatrix[rowLine - SIZE_OF_MATRIX + 1][columnLine - SIZE_OF_MATRIX + 1] = maxValue;

            columnLine++;
            if(columnLine == MAX_LINE) {columnLine = SIZE_OF_MATRIX - 1; rowLine++;}
        }

        return answerMatrix;
    }
};