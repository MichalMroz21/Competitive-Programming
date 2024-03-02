class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        int answer{};

        vector<int> columnInfo(n, 0), rowInfo(m, 0);

        for(auto& indice : indices){
            
            int r = indice[0], c = indice[1];

            rowInfo[r]++;
            if(rowInfo[r] == 2) rowInfo[r] = 0;

            columnInfo[c]++;
            if(columnInfo[c] == 2) columnInfo[c] = 0;
        }

        int columnRuin = accumulate(columnInfo.begin(), columnInfo.end(), 0);

        for(auto& row : rowInfo){
            if(row == 0) answer += columnRuin;
            else answer += n - columnRuin;   
        }

        return answer;
    }
};