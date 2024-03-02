class Solution {
public:

    double calcAngle(vector<int>& point1, vector<int>& point2){

        int dx = abs(point1[0] - point2[0]),
            dy = abs(point1[1] - point2[1]);

        return atan2(dy, dx);
    }

    bool isBoomerang(vector<vector<int>>& points) {
        
        if(points[0] == points[2] || points[0] == points[1] || points[1] == points[2]) return false;

        double a1 = calcAngle(points[0], points[1]),
               a2 = calcAngle(points[0], points[2]),
               a3 = calcAngle(points[1], points[2]);

        return !(a1 == a2 && a1 == a3 && a2 == a3);
    }
};