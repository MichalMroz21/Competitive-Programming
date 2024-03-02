class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int i = 0;
        vector<vector<int>> ret{};

        while (i < numRows){

            vector<int> temp{};

            for(int j=0; j<=i; j++){

                if(j == 0 || j == i) temp.push_back(1);
                else{
                    temp.push_back(ret[i-1][j] + ret[i-1][j-1]);
                }

            }

            ret.push_back(temp);
            i++;
        }

        return ret;

    }
};