class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        vector<int> cnt(*max_element(costs.begin(), costs.end()) + 1);

        for(auto i : costs){
            cnt[i]++;
        }

        int ans{};

        for(int i = 1; i < cnt.size(); i++){
            int amountBuy = min(cnt[i], coins / i);
            ans += amountBuy;
            coins -= (i * amountBuy);
            if(coins == 0) break;
        }      

        return ans;        
    }
};