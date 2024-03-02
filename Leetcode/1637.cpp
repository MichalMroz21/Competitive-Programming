class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end(), [](vector<int>& p1, vector<int>& p2){return p1[0] < p2[0]; });

        int prev{-1}, ret{};

        for(auto& i : points){
            if(prev != -1){
                ret = max(ret, i[0] - prev);
            }

            prev = i[0];
        }
        
        return ret;
    }
};