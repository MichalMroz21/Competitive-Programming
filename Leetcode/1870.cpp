class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        if(n - 1 >= hour) return -1;

        int L = 1, R = 10e7;

        while(L < R){

            double m = L + (R - L)/2, fullTime{};

            for(int i = 0; i < n; i++){
                fullTime += (dist[i] / m);
                double afterPoint = (dist[i] % static_cast<int>(m)) / m;
                if(i != n - 1 && afterPoint != 0) fullTime += (1 - afterPoint);
            }

            if(fullTime > hour) L = m + 1;
            else R = m;
        }

        return R;
    }
};