class Solution {
public:
    int calcDist(pair<int, int> a, pair<int, int> b){
        return abs(a.first - b.first) + abs(a.second - b.second);
    }

    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector<vector<int>> ans{};

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                ans.push_back({i, j});
            }
        }

        sort(ans.begin(), ans.end(), [&](auto& a, auto& b){
            return calcDist({a[0], a[1]}, {rCenter, cCenter}) < calcDist({b[0], b[1]}, {rCenter, cCenter});
        });

        return ans;
    }
};