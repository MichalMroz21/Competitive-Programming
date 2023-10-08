class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int a1 = coordinates[0][0];
        int b1 = coordinates[0][1];

        int a2 = coordinates[1][0];
        int b2 = coordinates[1][1];

        int aDiff = a2 - a1;
        int bDiff = b2 - b1;


        for(int i=2; i<coordinates.size(); i++){

            int a3 = coordinates[i][0];
            int b3 = coordinates[i][1];

            if(aDiff*(b3 - b2) != (a3 - a2)*bDiff) return false;

        }

        return true;

    }
};