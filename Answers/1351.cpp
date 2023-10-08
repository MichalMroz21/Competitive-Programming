class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int sum{};

        for(int i=0; i<grid.size(); i++){

            vector<int> temp = grid[i];

            int L = 0;
            int R = temp.size() - 1;

            while(L < R){

                int m = L + (R - L)/2;
                int k = temp[m];
                
                if(k >= 0) L = m + 1;
                else R = m;

            }

            sum += temp[R] < 0;
            sum += temp.size() - (R + 1);

        }

        return sum;

    }
};