class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n = image.size();

        for(int i = 0; i < n; i++){

            int L = 0;
            int R = n - 1;

            while(L < R){

                image[i][L] = !image[i][L];
                image[i][R] = !image[i][R];

                swap(image[i][L], image[i][R]);
                
                R--;
                L++;
            }

            if(L == R) image[i][L] = !image[i][L];

        }

        return image;

    }
};