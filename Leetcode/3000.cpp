class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
        int longestDiag{}, maxArea{};

        for(const auto& dim : dimensions){

            int diag = dim[0] * dim[0] + dim[1] * dim[1];

            if(diag == longestDiag){
                maxArea = max(maxArea, dim[0] * dim[1]);
            }

            else if(diag > longestDiag){
                longestDiag = diag;
                maxArea = dim[0] * dim[1];
            }
        }

        return maxArea;
    }
};