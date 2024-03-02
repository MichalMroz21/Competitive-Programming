class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        vector<int> ret(2, 0);

        for(int i = 0; i < mat.size(); i++){
                int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
                if(sum > ret[1]) {ret[0] = i; ret[1] = sum;}  
        }

        return ret;
    }
};