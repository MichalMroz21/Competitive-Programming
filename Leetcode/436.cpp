class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {

        const int n = intervals.size();

        vector<pair<int, int>> startPoints{};

        for(int i = 0; i < n; i++) startPoints.push_back({intervals[i][0], i});
        
        sort(startPoints.begin(), startPoints.end(), [](pair<int, int>& a, pair<int, int>& b){return a.first < b.first;});

        vector<int> res{};

        for(const auto& interval : intervals){

            const int end = interval[1];

            int L = 0;
            int R = n - 1;

            while(L < R){

                const int m = L + (R - L)/2;

                if(startPoints[m].first < end) L = m + 1;
                else R = m;

            }

            if(startPoints[R].first >= end) res.push_back(startPoints[R].second);
            else res.push_back(-1);
        }

        return res;
    }
};