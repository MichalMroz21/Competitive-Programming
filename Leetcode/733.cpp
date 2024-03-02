class Solution {
public:

    void fillTile(vector<vector<int>>& image, int i, int j, int color){

        int val = image[i][j], n = image.size(), m = image[0].size();

        if(image[i][j] == color) return;

        image[i][j] = color;

        if(j < m - 1 && image[i][j + 1] == val)
        fillTile(image, i, j + 1, color);

        if(i < n - 1 && image[i + 1][j] == val)
        fillTile(image, i + 1, j, color);

        if(i > 0 && image[i - 1][j] == val)
        fillTile(image, i - 1, j, color);

        if(j > 0 && image[i][j - 1] == val)
        fillTile(image, i, j - 1, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        fillTile(image, sr, sc, color);
        return image;
    }
};