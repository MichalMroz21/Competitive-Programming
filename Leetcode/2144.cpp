class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());

        int cnt{1}, ans{};

        for(int i = cost.size() - 1; i >= 0; i--){

            if(cnt % 3 != 0) ans += cost[i]; 

            cnt++;
        }

        return ans;
    }
};