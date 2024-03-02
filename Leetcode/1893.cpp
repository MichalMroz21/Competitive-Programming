class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        int maxPoint{}, minPoint{};

        for(auto& range : ranges){
            maxPoint = max(maxPoint, range[1]);
            minPoint = min(minPoint, range[0]);
        }

        vector<int> lineSweep(maxPoint + 2);

        for(auto& range : ranges){
            lineSweep[range[0]]++;
            lineSweep[range[1] + 1]--;
        }

        int sum{}, ans{};

        for(int i = minPoint; i <= maxPoint; i++){
            sum += lineSweep[i];
            if(i >= left && i <= right && sum) ans++;
        }

        return ans == (right - left + 1);
    }
};