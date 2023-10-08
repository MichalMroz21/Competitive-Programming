class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();

        int firstN = n;
        int count{};

        int sum{};

        while(n > 0){

            if(n == 1) sum+=mat[count][count];
            else sum += mat[count][count] + mat[count][firstN - 1 - count] + mat[firstN - 1 - count][count] + mat[firstN - 1 - count][firstN - 1 - count];

            n -= 2;
            count++;
        }

        return sum;

    }
};