class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                int sum{img[i][j]}, cnt{1};

                if(i != n - 1){
                    sum += img[i + 1][j];
                    cnt++;
                }
                if(i != 0){
                    sum += img[i - 1][j];
                    cnt++;
                }
                if(j != 0){
                    sum += img[i][j - 1];
                    cnt++;
                }
                if(j != m - 1){
                    sum += img[i][j + 1];
                    cnt++;
                }
                if(i != n - 1 && j != 0){
                    sum += img[i + 1][j - 1];
                    cnt++;
                }
                if(i != n - 1 && j != m - 1){
                    sum += img[i + 1][j + 1];
                    cnt++;
                }
                if(i != 0 && j != 0){
                    sum += img[i - 1][j - 1];
                    cnt++;
                }
                if(i != 0 && j != m - 1){
                    sum += img[i - 1][j + 1];
                    cnt++;
                }

                ans[i][j] = sum / cnt;
            }
        }

        return ans;
    }
};