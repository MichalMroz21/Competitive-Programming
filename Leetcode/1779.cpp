class Solution {
public:

    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int n = points.size();

        int evaluation{numeric_limits<int>::max()};
        int index{-1};

        for(int i = 0; i < n ; i++){

            if(x == points[i][0] || y == points[i][1]){

                int eval = abs(points[i][0] - x + points[i][1] - y);

                if(eval < evaluation) {
                    evaluation = eval;
                    index = i;
                }

            }

        }
        
        return index;

    }
};