class Solution {
public:

    bool checkTime(long long t, vector<int>& time, int totalTrips){

        long long ret{};

        for(auto i : time){

            ret += t / i;

        }

        return ret >= totalTrips;

    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long minTime = *min_element(time.begin(), time.end());

        long long L = 1L;
        long long R = minTime * totalTrips;

        while(L < R){

            long long m = L + (R - L)/2;

            bool check = checkTime(m, time, totalTrips);

            if(check == false) L = m + 1;
            else R = m;
        }        

        return R;

    }
};