class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int distSum{};
        vector<int> prev{};

        for(auto& point : points){

            if(!prev.empty()){
                distSum += max(abs(point[0] - prev[0]), abs(point[1] - prev[1])); 
            }
            prev = point;

        }

        return distSum;

    }
};