class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        for(int i = 0; i < n/2; i++){

            for(int j = i; j < n - 1 - i; j++){

                vector<int> a{matrix[i][j], matrix[j][n - 1 - i], matrix[n - 1 - i][n - 1 - j], matrix[n - 1 - j][i]}; //O(1)

                matrix[j][n - 1 - i] = a[0];  
                matrix[n - 1 - i][n - 1 - j] = a[1];
                matrix[n - 1 - j][i] = a[2];
                matrix[i][j] =  a[3];                   

            }

        }


    }
};