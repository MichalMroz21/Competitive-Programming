class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix[0].size();
        int m = matrix.size();

        int L = 0;
        int R = m*n - 1;

        while(L <= R){

            int M = L + (R - L)/2;

            int k = matrix[M / n][M % n];
            
            if(k == target) return true;
            if(k > target) R = M - 1;
            else L = M + 1;

        }

        return false;

    }
};