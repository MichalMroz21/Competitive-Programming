class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans{}, maxTime{}, prev{};

        for(auto& log : logs){

            int interv = log[1] - prev;

            if(interv >= maxTime){
                if(interv == maxTime) ans = min(ans, log[0]);
                else ans = log[0];
                
                maxTime = interv;
            }

            prev = log[1];
        }

        return ans;
    }
};