class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = 0;
        
        for(auto &i : points)
        {
            for(auto &j : points)
            {
                for(auto &k : points)
                {
                    area = max(area , abs(0.5 * (i[0] * (j[1] - k[1]) + j[0] * (k[1] - i[1]) + k[0] * (i[1] - j[1]))));
                }
            }
        }
        return area;
    }
};